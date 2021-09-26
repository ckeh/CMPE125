
module myquiz1(
 input  [7:0] IN,
 output Z
);

 assign Z = |IN;

endmodule

module myquiz2(
 input  [7:0] IN,
 output reg Z
);

 always @(*) begin
   Z = |IN;
 end

endmodule

module my2quiz1 (Z,IN);

 input  wire [7:0] IN;
 output wire Z;

 assign Z = |IN;

endmodule


module myquiz3(
 input  [7:0] IN,
 output Z
);
 reg Z;

 always @(*) begin
   Z = |IN;
 end

endmodule

