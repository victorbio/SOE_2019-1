#!/bin/bash
N=$1
while [ $N -gt "0" ]
do
	cd ..
	N=$(($N-1))
done
