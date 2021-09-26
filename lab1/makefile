fmux:
	verilator --Wall --cc --trace ./rtl/fmux.v ./rtl/flop.v --exe tests/fmux_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vfmux.mk Vfmux

compile_fast:
	verilator -Wall --cc ./rtl/hello.v --exe tests/hello_tb.cpp -O3
	make OPT_FAST="-O2" -j4 -C obj_dir/ -f Vhello.mk Vhello 

run: fmux
	./obj_dir/Vfmux

clean:
	rm -rf obj_dir output.vcd


