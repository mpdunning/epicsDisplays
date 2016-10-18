#!/bin/bash

arch=`uname -i`

if [ "$arch" = "i386" ]; then
    qArch=arch-32
else
    qArch=arch-64
fi

/afs/slac/g/testfac/tools/display/scan789A/ui/$qArch/scanui

exit 0

