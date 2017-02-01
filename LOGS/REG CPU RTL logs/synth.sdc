#=========================================================================
# Constraints file
#-------------------------------------------------------------------------
#
# This file contains various constraints for your chip including the
# target clock period, fanout, transition time and any
# input/output delay constraints.
#

# This constraint sets the target clock period for the chip in
# picosecond. You should set this constraint carefully. 
# If the period is unrealistically small then the tools will
# spend forever trying to meet timing and ultimately fail. If the period
# is too large the tools will have no trouble but you will get a very
# conservative implementation. 

set clk_input [define_clock -period 1100 -name clk_input clk]
external_delay -input 0 -clock $clk_input -name in_con [find /des* -port ports_in/*] 
external_delay -output 0 -clock $clk_input -name out_con [find /des* -port ports_out/*] 

# This constrainst sets the the maximum fanout a logic gate can have. This attribute 
# basically limits the number of gates driven by an output. 10 is reasonable number.

#set_attribute max_fanout 10 fir_filter

# The transition time is the amount of time it takes for a signal to change from one
# logic state to another. Setting a maximum transition limit on  
# a design sets the default maximum transition for a design.

#set_attribute max_transition 100 fir_filter

# The load on a net is comprised of the fanout and interconnect capacitance.
# Setting a maximum capacitance limit on a port specifies that the net connected to that port to
# have a total capacitance that is less than the value you specify. Setting a maximum
# capacitance limit on a design sets the default maximum capacitance for that design.

#set_attribute max_capacitance 10000 fir_filter
