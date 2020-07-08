/***********************************
* EECS2031 - Assignment 1
* Filename: poly.c 
* Author: Azhan, Ghori
* Email: azhan619@my.yorku.ca
* Login ID: azhan619
************************************/

#include "poly.h"
int term;


/* 
  Initialize all coefficients and exponents of the polynomial to zero.
 */



void ordering(int coeff[ ], int exp[ ]){

int index1;
int index2;
int counter=0;
int term=0;

while(   exp[term] != '\0' || coeff[term] != '\0'){

for(counter = term + 1; exp[counter] != '\0' || coeff[counter] != '\0' ; counter++ ){


if(exp[counter] > exp[term]){

                
index1 = exp[term];

                index2 = coeff[term];

                exp[term] = exp[counter];

                coeff[term] = coeff[counter];

                exp[counter] = index1;

                coeff[counter] = index2;
  





}



}





term++;


}






}























void init_polynom( int coeff[ ], int exp[ ] )
{

   /* ADD YOUR CODE HERE */

int i=0;

while(i < ASIZE){
coeff[i] = 0;

exp[i] = 0;
i=i+1;
}


}  /* end init_polynom */


/*
  Get inputs from user using scanf() and store them in the polynomial.
 */
void get_polynom( int coeff[ ], int exp[ ] )
{

   /* ADD YOUR CODE HERE */




  int l = 0;

    int total;

    scanf("%d", &total);
 
   while(total > 0)
    {
        
scanf("%d", &coeff[l]);

        scanf("%d", &exp[l]);

        total--;

        l++;
    }

    coeff[l] = '\0';

    exp[l] = '\0';



}  /* end get_polynom */


void IntToString(int n, char *s)
{
    char CharacterArr[ASIZE]; // This array is used to store all the characters in integer.
    int i = 0;
    int len;
    int sign = 0;

  // If integer is 0 then we only have 0 in our array, thats the base case.
  if(n == 0) 
    {
        s[0] = '0';
        
s[1] = '\0';   }
    else
    {
    
// it check if the integer is negative or not.
    if(n < 0) 

        {

           sign = 1;
 // if its negative the we turn sign to 1 and convert integer to positive to work with it.          
 n = -1*n;
        }
// Converts the integer to string.
while (n != 0) {
CharacterArr[i] = (n % 10) + '0';
            n = n/10;
i++;
}
// if the entered integer is negative then it add the '-' to the array .
        if(sign == 1)
        {
            CharacterArr[i] = '-';
            i++;
        }
      
  CharacterArr[i] = '\0';

        len = i;

        int j = 0;
    
while (j != len){
s[j] = CharacterArr[i - 1];
            i--;
j++;


}      
s[j] = '\0'; 



 
    }
}












/*
  Convert the polynomial to a string s.
 */
void polynom_to_string( int coeff[ ], int exp[ ], char s[ ] )
{
    int i =0;
int term=0;
int a=0;
/*
This while loop runs the code a null character is seen in either of the coefficient or exponent.
*/
while (coeff[term] != '\0' || exp[term] != 0)
{



/*
If first digit is 1 then just store 1 to the S[] array.
*/
if(coeff[term] == 1 && exp[term] == '\0'){

         s[i++] = '1';
          
}
/*
This deals with the case if first coefficient is negative.
*/
else if (coeff[term] == -1 && exp[term] == '\0'){


s[i-1] = '-';
s[i++]= '1';




}
/*
if the first term of the polynomial is then we don't have to do anything
, we skip this term since if coeff is 0 then the while term is 0.
*/
else if(coeff[term] == 0){


}

/*
Now we will deal with the rest of the case, since we got most of our base cases
covered above which is if coeff is 0 ,1 or -1.
*/
		else {

         
char s1[ASIZE];
char s2[ASIZE];
a=0;
// Here we check if the first term of coeff is 1, if it is then we dont have to print it.
if (coeff[term] == 1){

}

else {
// if the integer is negative it add the '-' character to array
          if ( i != 0 && coeff[term] == -1 ){


           s[i-1] = '-';




                  } 
  else {
                  IntToString(coeff[term],s1);



                   while (s1[a] != '\0')        
                   {

                       if(s1[a] == '-' && i != 0){

                     s[i-1] = s1[a];
                     
                      												
										}else
               {
                        s[i++] = s1[a];
                            

                   }
												
	      a++;

	}





}            




}
// Here if we have our exponent term 0, the we dont have to deal with it, we can skip this part.
if(exp[term] == 0){




            }



else {


       s[i++] = 'x';
   //if exponent is 1 then dont have to print it.    
     if(exp[term] == 1){


        }
  
             else {


                      s[i++]= '^';
                       
                      a=0;
// this stores the exponent characters in s2 array.         
             IntToString(exp[term],s2);

// We move our elements from the s2 array to the S array to print it.
                    while(s2[a] != '\0'){


                           s[i++] = s2[a];
                            

                            a++;


                        }
                         
}

}
if (coeff[term+1] != '\0' || exp[term+1] != '\0'){

s[i++]='+';
 


//}

}




}
term++;
}

if(i==0){

 s[i] = '0';
s[i+1] = '\0';

}           else {


        
if(s[i-1]=='+'){
i--;
}


          s[i] = '\0';
                 }
   

} 


/*
  Evaluate the polynomial for the value of x and store the result p(x) in variable result.
 */
void eval_polynom( int coeff[ ], int exp[ ], double x, double *result )
{
int a =0;

   

*result =0;
double v = x;

while(coeff[a] != '\0' || exp[a] != '\0'){
int f = exp[a];
if(f == 0){

x =1;
}

else {

if(f > 0) {

                if(f== 1){
              
               x=x;

                            }

                     else {


                            while(f!= 1){
                                         
                                  x =x *v;

                                        f--;
                                        
  }

									}
   



			}

else {


if(f == -1){


x = 1/x ;
 


}
else {


while(f!= -1){

  x = x*v;
  f++;

}
x = 1/x;
}






}






}

double t;
t = coeff[a]*x;
*result = *result + t;
x =v;


a++;





}





int g;


}  /* end eval_polynom */



/*
  Add two polynomials and the result is stored in the first polynomial (arrays co1[] and ex1[]).
 */
int u;
void add_polynom( int co1[ ], int ex1[ ], int co2[ ], int ex2[ ] )
{


   ordering(co1,ex1);
   ordering(co2,ex2);
 u=0;

int s1[ASIZE];
int s2[ASIZE];

int poly=0;
int coex=0;

while(co1[poly] != '\0' || ex1[poly] != '\0'){



poly=poly+1;

}

while(co2[coex] != '\0' || ex2[coex] != '\0'){



coex=coex+1;

}

int i=0;

while(i < coex)
{

s1[i] = co2[i];
i++; 




}

i=0;
 
while(i < coex)
    {
       s2[i] = ex2[i];
     
  i++;
    }


int p=0;
int q=0;

if(poly == 0){

          co1[poly] == co2[poly];
          poly++;
}


if(ex1[poly -1]==ex2[coex-1] && ex1[poly-1] == 0){

int z = co1[poly-1] + co2[coex-1];
co1[poly-1]=z;

co2[coex-1]=0;



}

while(co1[p] != '\0' || ex1[p]!='\0'){

int h;
for(h=0;h<coex;h++){

      if(ex1[p]==ex2[h] && ex1[p] !=0)
        {

              int o = co1[p] + co2[h];
              co1[p] = o;
         co2[h]=0;
         ex2[h]=0;

  



         }


}


p++;

}




while(q<coex){

if(co2[q] != 0 || ex2[q]!=0){

          co1[p] = co2[q];
          ex1[p]=ex2[q];
           p++;
}
q=q+1;


}

ex1[p]='\0';
co1[p]='\0';

u=p;
i=0;

while(i < coex)
{

co2[i]=s1[i];
i++;

}
i=0;
while(i<coex){
ex2[i] = s2[i];
i++;

}

ordering(co1,ex1);





   

}  
   

/************************** END OF FILE ***************************/


