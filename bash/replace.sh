#!/bin/bash

# Скрипт в дирректории находит файлы с пробелами и заменяет пробелы на подчёркивания

num=0


for filename in *
do 
     echo "$filename" | grep " "
     
     echo $?

     if [ $? -eq 0 ]
     then 
         fname=$filename
	 n=$(echo $fname | sed -e "s/ /_/g") 
         echo $n 	 
         mv "$fname"  "$n"

     fi	     
done
