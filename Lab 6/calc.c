/***********************************
* EECS 2031 - Lab 6		   
* Filename: calc.c	  	
* Author: Ghori, Azhan	    
* Email: azhan619@my.yorku.ca	 	
* Login ID: azhan619	
************************************/


#include <stdio.h>
#include <stdlib.h>


  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/

int StringToInteger(char *s){

int i =0;
int result=0;

while(s[i] != '\0'){

result = (result * 10) + s[i] - '0';
i++;

}

return result;

}
/* Implement a simple calculator. 
   Input: two operands and one operator as command-line arguments.
   Output: the result displayed on the standard output. 
 */

void main( int argc, char *argv[] )
{
  int result = 0;  /* stores the result of the arithmetic operation */


  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/

if ( argc != 4 ) {

printf("Usage: calc [operand_1] [operator] [operand_2]\n");

exit(1);
}



int first = StringToInteger(argv[1]);
int second = StringToInteger(argv[3]);


char c = argv[2][0];


if (c == '-'){

result = first - second;
}


if (c == '+'){

result = first + second;
}
if (c == 'x'){

result = first * second;
}

if (c == '/'){

result = first / second;
}
if (c == '%'){

result = first % second;
}
  

  printf( "%d\n", result );

}

