#!/usr/local/bin/wish
# 
# Script to prompt for a save or restore filename
# and save or restore the Marx Vernier coefficients
#
# Uses caput, caPut and caGet
# Uses MARX(P/D):VERNIER:IOERROR
#
#  August 2009
#  Ron Chestnut
#
#exec wish "$0" "$@"
# don't pop up the "wish" window
wm withdraw . 
set types {
    {{Save Files}	{.save}}
    {{All Files}	{*}}

}

# first argument is Prod or Dev

set prod_dev [lindex $argv 0]

switch -exact -- $prod_dev {
    Dev
    {
	set prefix "MARXD"
        set defdir "/afs/slac.stanford.edu/u/cd/ronc/wk7/epics/ioc/marx/test_marx/TestSoft/TestSoftApp/"
    }
    default
    {
       set prefix "MARXP"
       set defdir "/data/"
    }
}

set vernier_template $defdir 
append vernier_template "vernier.data"

if { [llength $argv] != 2} {
    puts "This command requires two arguments (Prod|Dev Save|Restore)"
    exit 1
}


append errpv $prefix ":VERNIER:IOERROR"

if [catch {set temp2 [exec caget -t $errpv]} result] {
    append errtxt "Error PV " $errpv " not available"
    puts $errtxt
    exit 1
} 

#
#exec cd $defdir
#
#third argument is the I/O direction

set function [lindex $argv 1]

switch -exact -- $function {
    Save 
      {
         set title "File Save Selection"
         set temp [tk_getSaveFile -initialdir $defdir -filetypes $types \
               -title $title -defaultextension ".save"] 
#          puts $vernier_template
#          puts $temp
          exec caGet1 $vernier_template $temp
          set errtxt "File Save successful"
      }

    Restore 
        {
          set title "File Restore Selection"
          set temp [tk_getOpenFile -initialdir $defdir -filetypes $types \
               -title $title -defaultextension ".save"]
	    if [catch {exec caPut1 $temp >/dev/null} result] {
		switch -glob -- $result {
                child*
		    {
                   set errtxt "File Restore successful"
		    }
                default
		    {
               set errtxt "File Restore Error"
               puts $result
		    }          
		}
	    } else {
               set errtxt "File Restore successful"
	    }
	}
    default 
     {
       append errtxt "Bad option " $function
     }

}

set temp2 [exec caput $errpv $errtxt]
exit 0

