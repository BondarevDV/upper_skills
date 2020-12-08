#!/bin/bash


# -gt > 
# -lt <
# -eq ==
# -le <=
# -ge >=

A=$1
B=$2
echo "number $A and number $B"

if [ $A -gt $B ]; then
	echo "$A > $B"
elif [ $A -lt $B ]; then
	echo "$A < $B"
elif [ $A -ge $B ]; then
	echo "$A >= $B"
elif [ $A -le $B ]; then
	echo "$A <= $B"
elif [ $A -eq $B ]; then
	echo "$A == $B"
fi


