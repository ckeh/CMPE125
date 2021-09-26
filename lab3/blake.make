
all: run

icache:
	verilator -I./rtl --Wall --cc --trace ./rtl/icache.v tests/igen.cpp --exe tests/blake_icache_tb.cpp -CFLAGS "-DTRACE=1 -std=c++11"
	make -C obj_dir/ -f Vicache.mk Vicache
	./obj_dir/Vicache

core:
	verilator -I./rtl --Wall --cc --trace ./rtl/core.v ./rtl/flop.v tests/igen.cpp --exe tests/blake_core_tb.cpp -CFLAGS "-DTRACE=1 -std=c++11"
	make -C obj_dir/ -f Vcore.mk Vcore
	./obj_dir/Vcore

clean:
	rm -rf obj_dir output.vcd a.out


