/***********************************
* EECS 2031 - Assignment 2
* Filename: mm.c
* Author: Ghori, Azhan
* Email: azhan619@my.yorku.ca	 	
* Login ID: azhan619	
************************************/
#include <stdio.h>
#include <stdlib.h>

/*




*/
/***************** DO NOT USE ARRAY INDEXING *****************/
/************** USE ONLY POINTERS IN THIS FILE ***************/

/* You may define additional functions and local variables. */


/*
 Save the three command-line arguments into nr1, nc1 and nc2.
 */

void get_args( char **argv, int *nr1, int *nc1, int *nc2 )
{

int i,k;
int num;
char c;
k=1;

while (k < 4){

i=0;

num=0;
   			
   

i=0;
   while ( *(* ( argv + k ) + i ) != '\0'){
    
num = num * 10;

c = *(*( argv + k ) + i );
  num = num + (c - '0');

i++;


   }



if(k==1){

*nr1 =num;

}

if(k==2){

*nc1 =num;

}

if(k==3){

*nc2 =num;
}

k++;

}



}





void initMatrix ( int **a, int nrows, int ncols )
{
    int k,i;
   
k=0;
int t;

while(k<nrows){

    i=0;
    while(i < ncols){
t=k+i;
  
   *(*( a + k) + i) = t;

      i++;
    }

k++;

}





}





/*
 Multiply arrays a and b.
 Array a has nr1 rows and nc1 columns.
 Array b has nc1 rows and nc2 columns.
 Allocate an array c having nr1 rows and nc2 columns.
 Compute a x b and store the result in array c.
 Return array c.
 If an error occurs (e.g., insufficient memory), return NULL pointer.
 */


int **matrix_mult( int **a, int **b, int nr1, int nc1, int nc2 )
{
    
    int result_size = nr1 * nc2;
    int **c = (int**) malloc(sizeof(int* ) * nr1);

    for(int n = 0; n < nr1; n++)
    {
        *(c + n) =(int*) malloc(sizeof(int) * nc2);
    }

    /*
    00 01   *   00 01   =   00*00 + 01*10  00*01 + 01*11
    10 11       10 11   =   10*00 + 11*10  10*01 + 11*11

    */
int t =0;
    int a_r = 0;
    while (a_r < nr1){
       
        int b_c = 0;
       
        while(b_c < nc2)
       
        {   
       
             int r=0;

             *(*(c + a_r) + b_c) = 0;
               
                 while( r < nc1  ){

                    
                          
                  *(*(c + a_r) + b_c) = *(*(c + a_r) + b_c) + (*(*(a + a_r) + r)) * (*(*(b + r) + b_c));


                        r++;


                 }

            b_c++;




           
        }

        a_r++;
    }
    return (c);


}

