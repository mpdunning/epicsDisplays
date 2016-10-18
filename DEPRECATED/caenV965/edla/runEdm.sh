#!/bin/sh

case "$#" in
    0)  P="CaenV965Test:" R="=CaenV965:"  ;;
    1)  P="$1"            R="=CaenV965:"  ;;
    2)  P="$1"            R="$2"          ;;
    *)  echo "Usage: $0 [P [R]]" >&2 ; exit 1 ;;
esac

edm -x -m "P=$P,R=$R" Engineering1.edl &
