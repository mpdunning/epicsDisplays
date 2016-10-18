#!/bin/sh

case "$#" in
    0)  P="CaenV965Test:" R="asyn"   ;;
    1)  P="$1"            R="asyn"   ;;
    2)  P="$1"            R="$2"     ;;
    *)  echo "Usage: $0 [P [R]]" >&2 ; exit 1 ;;
esac

for d in . ..
do
    if [ -r "$d/Makefile" -a -r "$d/configure/RELEASE" ]
    then
        cd "$d"
        SVIFS="$IFS"
        IFS="=$IFS"
        set -- `make -p | grep '^ *ASYN *='`
        IFS="$SVIFS"
        ASYN="$2"
        break
    fi
done
ADL="$ASYN/medm/asynRecord.adl"

medm -x -macro "P=$P,R=$R,PORT=CaenV965,ADDR=2000" "$ADL" &
