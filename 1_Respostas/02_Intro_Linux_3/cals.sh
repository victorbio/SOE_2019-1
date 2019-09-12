#!/bin/bash
counter=1
for x in $@
do
  if [ $counter = 1 ]
  then
    y=$x
    counter=2
  else
    cal $y $x
    echo ====================
    counter=1
  fi
done
