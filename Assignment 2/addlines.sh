#!/bin/sh
#Student Name: Azhan Khan Ghori
#Student ID: 215774466
#Email: azhan619@my.yorku.ca
#EECS username: azhan619


echo -n "Enter input file name:"
read fileName

if test ! -f $fileName
then 
echo "File '$fileName' does not exist." 
exit 



elif test ! -r $fileName
then 
echo "File '$fileName' is not readable." 
exit 

fi


echo -n "Enter output file name:"
read outfileName



if test -f $outfileName
then

    if test ! -w $outfileName
then
    echo "File '$outfileName' is not writable."
    exit
    
else

echo "Append to it (y/n)?"
read ap
if test $ap = "n" || test $ap = "N"
then
exit 1

fi
fi

until test $ap = "y" || test $ap = "n" || test $ap = "Y" || test $ap = "N"
do 
echo "Invalid option"
echo -n "Append to it (y/n)?"
read ap

done





if test $ap = "n" || test $ap = "N"
then
exit 1

fi
fi

i=1
j=1
output=$(wc -l $fileName | cut -d' ' -f1)
echo $j: $(tail -$( expr $(wc -l $fileName | cut -d' ' -f1 ) - 0 ) $fileName | head -1) >> $outfileName 
j=$(expr $j + 1)
while test $i -lt $output
do

echo $j: $(tail -$( expr $(wc -l $fileName | cut -d' ' -f1 ) - $i ) $fileName | head -1) >> $outfileName

j=$(expr $j + 1)
i=$(expr $i + 1)

done
