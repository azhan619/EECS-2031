/****************************************EECS2031 –Lab3*
Filename:lab3b
Author: Ghori, Azhan
Email: azhan619@my.yorku.ca
EECSlogin ID: azhan619*
***************************************/
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
void main(){

int my_strg[MAX_SIZE];
    int arrt[MAX_SIZE];
    int i=0; 
int d;
int my_int;
int on=0;
int k;
int x;
int loop =0;
int b=1;
int sum=0;
char c;
    
   c=getchar();
while(c != '\n'){
if ( c == '-'){
c = getchar();
on =1;
}

   x = c-48;

if (x >= 8) {
  break;
}

   
my_strg[i] = x;

i++;
c = getchar();

}
k =i-1;

      
   
if (x>= 8) {

printf("Error: Not an octal number\n");
}
else { for(loop = k; loop >= 0; loop--) {
      

d= b * my_strg[loop];
my_int = my_int + d;

b=b*8;


 }
if (on == 1){
my_int= my_int *-1;
}
printf("%d\n",my_int);
}
}
