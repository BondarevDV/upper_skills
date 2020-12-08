#!/bin/bash 


array=(1 3 4 5)

echo ${array[*]}


for i in ${array[*]}
do
    echo $i;
done	

i=0

while [ $i -ne 10 ]
do
     echo $i

     i=$(( $i + 1 ))

done


