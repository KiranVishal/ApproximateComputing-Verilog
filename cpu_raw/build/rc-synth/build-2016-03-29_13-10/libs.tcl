#=========================================================================
# TCL Script File for RC Compiler Library Setup
#-------------------------------------------------------------------------

# The makefile will generate various variables which we now read in

source make_generated_vars.tcl

# The following commands setup the standard cell libraries

#set_attribute library ../../../lib/NangateOpenCellLibrary_typical_conditional_ccs.lib
set_attribute library /ad/eng/courses/ec/ec772/Nangate/NangateOpenCellLibrary_PDKv1_3_v2009_07/liberty/NangateOpenCellLibrary_typical_conditional_ccs.lib
#set_attribute library ../../../lib/mylib.lib

# The search path needs to point to the verilog source directory

set_attribute hdl_search_path ${SEARCH_PATH}

# set the maximum number of loops that need to be unrolled
set_attribute hdl_max_loop_limit 10000 
