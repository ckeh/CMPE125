
all: run

regfile:
	verilator --Wall --cc --trace ./rtl/regfile.v --exe tests/regfile_tb.cpp -CFLAGS -DTRACE=1
	make -C obj_dir/ -f Vregfile.mk Vregfile

run: regfile
	./obj_dir/Vregfile

clean:
	rm -rf obj_dir output.vcd a.out

