/****************************************EECS2031 –Lab1*
Filename:lab2d
Author: Ghori, Azhan
Email: azhan619@my.yorku.ca
EECSlogin ID: azhan619*
***************************************/

#include<stdio.h>
#define SIZE 100
void main() {

int max;
int min;
int i=0;
int arr[SIZE];
int a;


scanf("%d",&a);
arr[i] = a;
i++;
max =a;
min =a;

while ( a!= 0 && i < 100){

scanf("%d",&a);
arr[i] = a;
i++;

if(a > max)
 max =a;

if ( a < min)
min =a;










}

printf("%d\t%d\n",max,min);
}






























