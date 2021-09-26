#include "igen.h"
#include <cstdlib>
#include <cstdint>
using std::to_string;

#ifdef INCLUDE_64B
#define OPCODE_LEN        8
#else
#define OPCODE_LEN        6
#endif

uint8_t opcodes[] = {
  BRANCH_OPS,
  ARITH_IMM,
  ARITH_REG,
  JAL_OP,
  JALR_OP,
  AUIPC_OP,

  // 64-bit operands
  ARITH_IMM_WORD,
  ARITH_REG_WORD
};

#define BRANCH_FUNC3_LEN      6
uint8_t branch_func3[] = {
  0, 1, 4, 5, 6, 7
};

#define ARITH_WORD_FUNC3_LEN  3
uint8_t arith_word_func3[] = {
  0, 1, 7
};

uint32_t random_inst32()
{
  uint8_t rand_opcode = rand() % OPCODE_LEN;

  if (opcodes[rand_opcode] == AUIPC_OP || opcodes[rand_opcode] == JALR_OP ||
        opcodes[rand_opcode] == JAL_OP) {

    rand_opcode = rand() % OPCODE_LEN;
  }

  return inst_with_opcode(opcodes[rand_opcode]);
}

uint32_t inst_with_opcode(uint8_t opcode, int default_func3)
{
  uint32_t inst = 0;
  uint8_t func3;

  OR_BITS(inst, 0, opcode);

  switch (opcode) {
  case BRANCH_OPS:
    
    func3 = (default_func3 == -1) ?
      branch_func3[rand() % BRANCH_FUNC3_LEN] : (uint8_t) default_func3;
    
    OR_BITS(inst, 7, rand() % 32);
    OR_BITS(inst, 12, func3);
    OR_BITS(inst, 15, rand() % 32);
    OR_BITS(inst, 20, rand() % 32);
    OR_BITS(inst, 25, rand() % 128);
    break;

  case ARITH_IMM_WORD:
  case ARITH_IMM:

    OR_BITS(inst, 7, rand() % 32);

    // allow for a func3 value to be passed in, or generate
    // it based on the allowed values per instruction
    if (default_func3 != -1) {
      func3 = (uint8_t) default_func3;
    } else {
      if (opcode == ARITH_IMM_WORD)
        func3 = arith_word_func3[rand() % ARITH_WORD_FUNC3_LEN];
      else
        func3 = rand() % 8;
    }

    OR_BITS(inst, 12, func3);
    OR_BITS(inst, 15, rand() % 32);

    if (func3 == 1) {
      // do nothing
    } else if (func3 == 5) {
      OR_BITS(inst, 20, rand() % 32);
      if (rand() % 2 == 0)
        OR_BITS(inst, 25, 0x0100000);
    } else {
      OR_BITS(inst, 20, rand() & 0xFFF);
    }

    break;

  case ARITH_REG_WORD:
  case ARITH_REG:
    
    OR_BITS(inst, 7, rand() % 32);
    
    // allow for a func3 value to be passed in, or generate
    // it based on the allowed values per instruction
    if (default_func3 != -1) {
      func3 = (uint8_t) default_func3;
    } else {
      if (opcode == ARITH_IMM_WORD)
        func3 = arith_word_func3[rand() % ARITH_WORD_FUNC3_LEN];
      else
        func3 = rand() % 8;
    }

    OR_BITS(inst, 12, func3);
    OR_BITS(inst, 15, rand() % 32);
    OR_BITS(inst, 20, rand() % 32);

    if (func3 == 0 || func3 == 5) {
      if (rand() % 2 == 0)
        OR_BITS(inst, 25, 0x0100000);
    }

    break;

  case JAL_OP:
    
    OR_BITS(inst, 7, rand() & 0x1F);
    OR_BITS(inst, 12, rand() & 0xFFFFF);
    break;

  case JALR_OP:
    
    OR_BITS(inst, 7, rand() & 0x1F);
    OR_BITS(inst, 15, rand() & 0x1F);
    OR_BITS(inst, 20, rand() & 0x7FF);
    break;

  case AUIPC_OP:
    
    OR_BITS(inst, 7, rand() & 0x01FFFFFF);
    break;

  default:
    ;
  }

  return inst;
}

string inst_text(uint32_t inst)
{
  string text;

  switch(OPCODE(inst)) {
  case BRANCH_OPS:
    
    if (FUNC3(inst) == 0)
      text += "BEQ ";
    else if (FUNC3(inst) == 1)
      text += "BNE ";
    else if (FUNC3(inst) == 4)
      text += "BLT ";
    else if (FUNC3(inst) == 5)
      text += "BGE ";
    else if (FUNC3(inst) == 6)
      text += "BLTU ";
    else if (FUNC3(inst) == 7)
      text += "BGEU ";

    text += "R";
    text += to_string(RS1(inst));
    text += ", R";
    text += to_string(RS2(inst));
    text += ", ";
    text += to_string(BR_IMM(inst));

    break;

  case ARITH_IMM:

    switch(FUNC3(inst)) {
    case 0:
      text += "ADDI ";
      break;
    case 1:
      text += "SLLI ";
      break;
    case 2:
      text += "SLTI ";
      break;
    case 3:
      text += "SLTIU ";
      break;
    case 4:
      text += "XORI ";
      break;
    case 5:
      if (FUNC7(inst) == 0)
        text += "SRLI ";
      else
        text += "SRAI ";
      break;
    case 6:
      text += "ORI ";
      break;
    
    default:
      text += "ANDI ";
    }

    text += "R";
    text += to_string(RD(inst));
    text += ", R";
    text += to_string(RS1(inst));
    text += ", ";

    if (FUNC3(inst) == 5 || FUNC3(inst) == 2) {
      text += to_string(SHAMT(inst));
    } else {
      text += to_string(IMM12(inst));
    }

    break;

  case ARITH_IMM_WORD:

    switch(FUNC3(inst)) {
    case 0:
      text += "ADDIW ";
      break;
    case 1:
      text += "SLLIW ";
      break;
    case 5:
      if (FUNC7(inst) == 0)
        text += "SRLI ";
      else
        text += "SRAI ";
      break;
    
    default:
      text += "ADDIW ";
    }

    text += "R";
    text += to_string(RD(inst));
    text += ", R";
    text += to_string(RS1(inst));
    text += ", ";

    if (FUNC3(inst) == 5 || FUNC3(inst) == 2) {
      text += to_string(SHAMT(inst));
    } else {
      text += to_string(IMM12(inst));
    }

    break;

  case ARITH_REG:

    switch(FUNC3(inst)) {
    case 0:
      text += (FUNC7(inst) == 0) ? "ADD " : "SUB ";
      break;
    case 1:
      text += "SLL ";
      break;
    case 2:
      text += "SLT ";
      break;
    case 3:
      text += "SLTU ";
      break;
    case 4:
      text += "XOR ";
      break;
    case 5:
      text += (FUNC7(inst) == 0) ? "SRL " : "SRA ";
      break;
    case 6:
      text += "OR ";
      break;
    
    default:
      text += "AND ";
    }

    text += "R";
    text += to_string(RD(inst));
    text += ", R";
    text += to_string(RS1(inst));
    text += ", ";
    text += "R";
    text += to_string(RS2(inst));
    break;

  case ARITH_REG_WORD:

    switch(FUNC3(inst)) {
    case 0:
      text += (FUNC7(inst) == 0) ? "ADDW " : "SUBW ";
      break;
    case 1:
      text += "SLLW ";
      break;
    case 5:
      text += (FUNC7(inst) == 0) ? "SRLW " : "SRAW ";
      break;
    
    default:
      text += "ADDW ";
    }

    text += "R";
    text += to_string(RD(inst));
    text += ", R";
    text += to_string(RS1(inst));
    text += ", ";
    text += "R";
    text += to_string(RS2(inst));
    break;

  case JAL_OP:
    text += "JAL R";
    text += to_string(RD(inst));
    text += ", ";
    text += to_string(JAL_IMM(inst));
    break;

  case JALR_OP:
    text += "JALR R";
    text += to_string(RD(inst));
    text += ", R";
    text += to_string(RS1(inst));
    text += ", ";
    text += to_string(IMM12(inst));
    break;

  case AUIPC_OP:
    text += "AUIPC R";
    text += to_string(RD(inst));
    text += ", ";
    text += to_string(IMM20(inst));
    break;

  default:
    ;
  }

  return text;
}
