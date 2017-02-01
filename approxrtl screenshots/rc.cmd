# Cadence Encounter(R) RTL Compiler
#   version v07.10-s016_1 (32-bit) built Sep 13 2007
#
# Run with the following arguments:
#   -logfile rc.log
#   -cmdfile rc.cmd

set_attribute hdl_search_path /home/bmahesh/Downloads/approx
set_attribute library /ad/eng/courses/ec/ec772/Spring2011/Nangate/NangateOpenCellLibrary_PDKv1_3_v2009_07/liberty/NangateOpenCellLibrary_typical_conditional_ccs.lib
read approx_mul.v
read_hdl approx_mul.v
elaborate
check_design
set clk_input [define_clock -period 1500 -name clk_input clk]
external_delay -input 10 -clock $clk_input -name in_con [find /des* -port ports_in/*]
external_delay -output 10 -clock $clk_input -name out_con [find /des* -port ports_out/*]
synthesize -to_mapped
set clk_input [define_clock -period 500 -name clk_input clk]
external_delay -input 10 -clock $clk_input -name in_con [find /des* -port ports_in/*]
external_delay -output 10 -clock $clk_input -name out_con [find /des* -port ports_out/*]
synthesize -to_mapped
set clk_input [define_clock -period 200 -name clk_input clk]
external_delay -input 10 -clock $clk_input -name in_con [find /des* -port ports_in/*]
external_delay -output 10 -clock $clk_input -name out_con [find /des* -port ports_out/*]
synthesize -to_mapped
set clk_input [define_clock -period 230 -name clk_input clk]
external_delay -input 10 -clock $clk_input -name in_con [find /des* -port ports_in/*]
external_delay -output 10 -clock $clk_input -name out_con [find /des* -port ports_out/*]
synthesize -to_mapped
