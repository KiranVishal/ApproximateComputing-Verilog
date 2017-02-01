# Cadence Encounter(R) RTL Compiler
#   version v07.10-s016_1 (32-bit) built Sep 13 2007
#
# Run with the following arguments:
#   -logfile rc.log
#   -cmdfile rc.cmd

source libs.tcl
read_hdl ${VERILOG_SRCS}
read_hdl ${VERILOG_SRCS}
elaborate
check_design
source synth.sdc
synthesize -to_mapped
write -mapped > synthesized.v
report timing > timing.rpt
report area > cell_area.rpt
report gates > gate_area.rpt
report design_rules Multicycle_Datapath > design_rule_violations.rpt
exit
