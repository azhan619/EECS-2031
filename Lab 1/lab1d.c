/****************************************EECS2031 –Lab1*
Filename:lab1d
Author: Ghori, Azhan
Email: azhan619@my.yorku.ca
EECSlogin ID: azhan619*
***************************************/



#include<stdio.h>
void main(){

int a;
char b;

b = getchar();

  while ( b != '\n' ) {

if(b == ' ') {

a= a+1;
}

b= getchar();
}

printf("%d\n",a);

}

