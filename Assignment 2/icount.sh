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






echo -n "Count lines, words, characters or all three (l, m, c, a)?"
read s

until test $s = "l" || test $s = "m" || test $s = "c" || test $s = "a" || $s = "L" || test $s = "M" || test $s = "C" || test $s = "A"
do "Invalid option"
echo -n "Count lines, words, characters or all three (l, m, c, a)?"
read s
done



if test $s = "l"


then
output=$(wc -l $fileName  | cut -d' ' -f1)
echo "File '$fileName' contains $output lines."


elif test $s = "m"
then 
output=$(wc -w $fileName  | cut -d' ' -f1)
echo "File '$fileName' contains $output words."

elif test $s = "c"
then 
output=$(wc -c $fileName  | cut -d' ' -f1)
echo "File '$fileName' contains $output characters."

elif test $s = "a"
then 
output1=$(wc -l $fileName  | cut -d' ' -f1)
output2=$(wc -w $fileName  | cut -d' ' -f1)
output3=$(wc -c $fileName  | cut -d' ' -f1)

echo "File '$fileName' contains $output1 lines, $output2 words, $output3 characters."



fi
