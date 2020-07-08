/***********************************
* EECS 2031 - Lab 7		   
* Filename: mmavg.c	  	
* Author: Ghori,Azhan    
* Email: azhan619@my.yorku.ca	 	
* Login ID: azhan619	
************************************/


#include <stdio.h>
#include <stdlib.h>


  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/



/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */

int toInteger( char *s){

int i=0;
int result=0;
int sign=0;

char c = *s;
if (*s == '-'){
s++;
sign=1;
}

if (*s == '+'){
s++;

}
while(*s != '\0'){
c = *s;

result = (result*10)+c - '0';
s++;


}

if(sign == 1){
result = result*-1;
}
return result;



}



main( int argc, char *argv[] )
{
  int max, min;
  float avg;
int sum=0;
int j;
int count;
count = argc-1;
int t;
  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/


if(argc == 1){

printf("Usage: mmavg in1 int2 int3 ... ");
exit(1);
}
if(argc > 1){

max=toInteger(argv[1]);
min=toInteger(argv[1]);
for(j=1; j< argc; j++){

	t = toInteger(argv[j]);

if (t > max){
max =t;
}
if(t<min){
min=t;
}

sum = sum + t;





}
}

avg = (float)sum / (float)count;





  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf( "%d %d %.2f\n", max, min, avg );
}

