# Cadence Encounter(R) RTL Compiler
#   version v07.10-s016_1 (32-bit) built Sep 13 2007
#
# Run with the following arguments:
#   -logfile rc.log
#   -cmdfile rc.cmd

source libs.tcl
read_netlist -top Multicycle_Datapath synthesized.v
