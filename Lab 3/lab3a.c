/****************************************EECS2031 –Lab3*
Filename:lab3a
Author: Ghori, Azhan
Email: azhan619@my.yorku.ca
EECSlogin ID: azhan619*
***************************************/


#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
void main(){

char my_strg[MAX_SIZE];
char other_strg[MAX_SIZE];

    int i=0; 
int k;
int j=0;
char c;

   c = getchar();
   other_strg[i]=c;
   i++;

while(c != '\n'){
c=getchar();
other_strg[i]=c;
i++;


}


k=i;

    for (j = 0; i > 0; j++) {
        my_strg[j] = other_strg[i-1];
          i = i-1; // reverse it
    }
    my_strg[j] = '\0';
     
    
    printf("%s\n",my_strg);



}
