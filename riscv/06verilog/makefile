
all: run

hello2:
	verilator --Wall --cc --trace ./rtl/hello2.v --exe tests/hello2_tb.cpp -CFLAGS -DTRACE=1
	#verilator --cc --trace ./rtl/hello2.v --exe tests/hello2_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vhello2.mk Vhello2

sample3:
	verilator -I./rtl --Wall --cc --trace ./rtl/sample3.v ./rtl/flop.v --exe tests/sample3_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vsample3.mk Vsample3

run2: hello2
	./obj_dir/Vhello2

run: sample3
	./obj_dir/Vsample3

clean:
	rm -rf obj_dir output.vcd a.out


