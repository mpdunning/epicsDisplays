# -*- shell-script -*- to clear the HPMod fault log
#
# Required environment variables:
# S, SS, N
#
# Can be called from EDM script button via
# "S=$(S) SS=$(S) N=$(N) sh HPMod_clear_log.sh"
#
# kasemir@lanl.gov

# echo HPMod log clear: ${S}_${SS} ${N}

# Break the "scroll" chain
caput TRS3:PLC:FltLog1.INP ""
caput TRS3:PLC:FltLog1_Tim.INP ""

# Clear first fault, clear time stamp
caput TRS3:PLC:FltLog0_FFlt ""
caput TRS3:PLC:FltLog1_Tim ""

# write "" to first log message,
caput TRS3:PLC:FltLog1 ""
# process upper-most fault log line so that it will scroll
# the empty message up into all the fault log lines
for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
do
	caput TRS3:PLC:FltLog25.PROC 1
done

# Restore the links for the scroll chain
caput TRS3:PLC:FltLog1_Tim.INP "TRS3:PLC:FltLog0_Tim"
caput TRS3:PLC:FltLog1.INP "TRS3:PLC:FltLog0"
