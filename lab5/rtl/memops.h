
// Memory operations send from execute to testbench (or data cache for lab5)
`define RVMOP_LB   4'b0000
`define RVMOP_LH   4'b0001
`define RVMOP_LW   4'b0010
`define RVMOP_LBU  4'b0100
`define RVMOP_LHU  4'b0101
`define RVMOP_LWU  4'b0110
`define RVMOP_LD   4'b0011

`define RVMOP_SB   4'b1000
`define RVMOP_SH   4'b1001
`define RVMOP_SW   4'b1010
`define RVMOP_SD   4'b1011

