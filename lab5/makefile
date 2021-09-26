
all: run

core:
	verilator --cc --trace -I./rtl ./rtl/core.v ./rtl/fetch.v ./rtl/decode.v ./rtl/execute.v ./rtl/alu.v ./rtl/memops.h ./rtl/regfile.v ./rtl/fflop.v ./rtl/flop.v ./rtl/icache.v --exe tests/core_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vcore.mk Vcore

run: core
	./obj_dir/Vcore

clean:
	rm -rf obj_dir output.vcd a.out

