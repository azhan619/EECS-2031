/****************************************EECS2031 –Lab1*
Filename:lab2c
Author: Ghori, Azhan
Email: azhan619@my.yorku.ca
EECSlogin ID: azhan619*
***************************************/


#include<stdio.h>
void main() {


int sum=0;
int count =0;
char c;
int x;


c = getchar();

while( c != '\n' ) {

x = c-48;
 if ( x <= 9 && x >=0 ) {


 sum = sum + x;
  count = count +1;

}

c = getchar();


}

printf(" %d  %d\n",count,sum);





}
