
module hello();

initial begin
  $display("Hello too");

  if ( 3'b10x == 3'b10x ) begin
    $display("True %b", ( 3'b10x == 3'b10x ));
  end else begin
    $display("false %b", ( 3'b10x == 3'b10x ));
  end
  $finish;
end

endmodule

