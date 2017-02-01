#######################################################
#                                                     #
#  Encounter Command Logging File                     #
#  Created on Wed Apr 27 15:16:30 2016                #
#                                                     #
#######################################################

#@(#)CDS: Encounter v09.13-s229_1 (32bit) 10/22/2010 15:32 (Linux 2.6)
#@(#)CDS: NanoRoute v09.13-s023 NR101021-1752/USR65-UB (database version 2.30, 109.2.1) {superthreading v1.15}
#@(#)CDS: CeltIC v09.13-s071_1 (32bit) 10/18/2010 04:07:09 (Linux 2.6.9-89.0.19.ELsmp)
#@(#)CDS: AAE 09.12-e022 (32bit) 10/22/2010 (Linux 2.6.9-78.0.25.ELsmp)
#@(#)CDS: CTE 09.13-s122_1 (32bit) Oct 18 2010 03:21:02 (Linux 2.6.9-89.0.19.ELsmp)
#@(#)CDS: CPE v09.13-s009

setImportMode -keepEmptyModule 0
loadNetlist -i verilog ../../rc-synth/current/synthesized.v
setTopCell Multicycle_Datapath
