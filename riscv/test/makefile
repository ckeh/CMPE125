
all: run

hello2:
	verilator --Wall --cc --trace ./rtl/hello2.v --exe tests/hello2_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vhello2.mk Vhello2

fmux:
	verilator --Wall --cc --trace ./rtl/fmux.v ./rtl/flop.v --exe tests/fmux_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vfmux.mk Vfmux

flop:
	verilator --Wall --cc --trace ./rtl/flop.v --exe tests/flop_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vflop.mk Vflop

flop2:
	verilator --cc --trace ./rtl/flop2.v --exe tests/flop2_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vflop2.mk Vflop2

compile_fast:
	verilator -Wall --cc ./rtl/hello.v --exe tests/hello_tb.cpp -O3
	make OPT_FAST="-O2" -j4 -C obj_dir/ -f Vhello.mk Vhello 

run: fmux
	./obj_dir/Vfmux

run2: hello2
	./obj_dir/Vhello2

clean:
	rm -rf obj_dir output.vcd


