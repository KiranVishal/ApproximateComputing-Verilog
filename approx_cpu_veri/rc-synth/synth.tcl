#=========================================================================
# TCL Script File for Synthesis using Cadence RTL Compiler
#-------------------------------------------------------------------------

# 

# The makefile will generate various variables which we now read in
# and then display

source make_generated_vars.tcl
echo ${SEARCH_PATH}
echo ${VERILOG_SRCS}
echo ${VERILOG_TOPLEVEL}

# The library setup is kept in a separate tcl file which we now source

source libs.tcl

# These two commands read in your verilog source and elaborate it

read_hdl ${VERILOG_SRCS}
elaborate

# This command will check your design for any errors

check_design > synth_check_design.rpt

# We now load in the constraints file

source synth.sdc

# This actually does the synthesis. The -effort option indicates 
# how much time the synthesizer should spend optimizing your design to
# gates. Setting it to high means synthesis will take longer but will
# probably produce better results.

synthesize -to_mapped -effort medium 

# We write out the results as a verilog netlist

write -mapped > synthesized.v

# We create a timing report for the worst case timing path, 
# an area report for each reference in the heirachy and a DRC report

report timing > timing.rpt
report area > cell_area.rpt
report gates > gate_area.rpt
report design_rules Multicycle_Datapath > design_rule_violations.rpt

# Used to exit the RTL Compiler 

exit
