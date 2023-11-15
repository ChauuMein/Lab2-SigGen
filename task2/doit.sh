

rm -rf obj_dir
rm -rf doublesinegen.vcd 


verilator -Wall --cc --trace doublesinegen.sv --exe doublesinegen_tb.cpp

make -j -C obj_dir/ -f Vdoublesinegen.mk Vdoublesinegen

obj_dir/Vdoublesinegen