#ifndef IGEN_H_
#define IGEN_H_

#include <cstdint>
#include <string>
using std::string;

// opcodes
#define BRANCH_OPS      0b1100011
#define ARITH_IMM       0b0010011
#define ARITH_REG       0b0110011
#define JAL_OP          0b1101111
#define JALR_OP         0b1100111
#define AUIPC_OP        0b0010111
#define ARITH_IMM_WORD  0b0011011
#define ARITH_REG_WORD  0b0111011

// bit select macro
#define BIS32(x, start, end)          ((x << (32-(1+start))) >> (32-(1+start)+end))

// instruction field extraction macros
#define OR_BITS(inst, bstart, value)  (inst |= (value << bstart))
#define OPCODE(inst)                  (inst & 0x0000007F)
#define FUNC3(inst)                   ((inst & 0x00007000) >> 12)
#define FUNC7(inst)                   (inst >> 25)
#define RD(inst)                      ((inst & 0x00000F80) >> 7)
#define RS1(inst)                     ((inst & 0x000F8000) >> 15)
#define RS2(inst)                     ((inst & 0x01F00000) >> 20)
#define IMM12(inst)                   (inst >> 20)
#define IMM20(inst)                   (inst >> 12)
#define SHAMT(inst)                   RS2(inst)

#define BR_IMM(inst)                  ((BIS32(inst, 11, 8) << 1) + \
                                        (BIS32(inst, 30, 25) << 5) + \
                                        (BIS32(inst, 7, 7) << 6) + \
                                        (BIS32(inst, 31, 31) << 7))
#define JAL_IMM(inst)                 ((BIS32(inst, 31, 31) << 21) + \
                                        (BIS32(inst, 19, 12) << 12) + \
                                        (BIS32(inst, 20, 20) << 11) + \
                                        (BIS32(inst, 30, 21) << 1))

uint32_t random_inst32();
uint32_t inst_with_opcode(uint8_t opcode, int default_func3 = -1);
string inst_text(uint32_t inst);

#endif
