
all: run

core:
	verilator --Wall --cc --trace ./rtl/core.v ./rtl/fetch.v ./rtl/decode.v ./rtl/execute.v ./rtl/alu.v ./rtl/signext.v ./rtl/regfile.v ./rtl/flop_r.v ./rtl/flop_er.v ./rtl/flop.v ./rtl/flop_e.v ./rtl/icache.v --exe tests/core_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vcore.mk Vcore

run: core
	./obj_dir/Vcore

clean:
	rm -rf obj_dir output.vcd a.out

