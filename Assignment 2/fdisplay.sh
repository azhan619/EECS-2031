#!/bin/sh
#Student Name: Azhan Khan Ghori
#Student ID: 215774466
#Email: azhan619@my.yorku.ca
#EECS username: azhan619



echo -n "Enter the File Name:"
read fileName


if test ! -f $fileName
then 
echo "File "$fileName" does not exist." 
exit 



elif test ! -r $fileName
then 
echo "File "$fileName" is not readable." 
exit 

fi



echo -n "Enter option (e, p, f, l):"
read s

until test $s = "e" || test $s = "p" || test $s = "f" || test $s = "l" || $s = "E" || test $s = "P" || test $s = "F" || test $s = "L"
do 
echo "Invalid option"
echo -n "Enter option (e, p, f, l):"
read s
done

if test $s = "e" || $s = "E"
then 
cat $fileName

elif test $s = "p" || $s = "P"
then 
cat $fileName | less $fileName

elif test $s = "f" || $s = "F"
then
head -10 $fileName

elif test $s = "l" || $s = "L"
then
tail -10 $fileName
fi

