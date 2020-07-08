#!/bin/sh
#Student Name: Azhan Khan Ghori
#Student ID: 215774466
#Email: azhan619@my.yorku.ca
#EECS username: azhan619

echo -n "Enter the file name:"
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

echo -n "Enter the word to search for:"
read wordName

echo "Case-sensitive? (y/n)"
read s



until test $s = "y" || test $s = "n" || test $s = "N" || test $s = "Y"
do 
echo "Invalid option"
echo  "Case-sensitive? (y/n)"
read s
done







if test $s = "N" || test $s = "n"
then grep -i $wordName $fileName


elif test $s = "y" || test $s = "Y"
then grep $wordName $fileName

fi

if test $? -eq 1
then echo "Word not found!"
fi
