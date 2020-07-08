/***********************************
* EECS2031 - Assignment 1
* Filename: list.c
* Author: Azhan, Ghori
* Email: azhan619@my.yorku.ca
* Login ID: azhan619
************************************/


#include <stdio.h>
#include <stdlib.h>
#include "list.h"


List *head, *tail;


/* Display an error message. */

void prtError( char *errMsg )
{
   printf( "%s \n", errMsg );
}


/* Print the content of the list (ignoring the dummy node). */

void prtList()
{
   List *p;
   for ( p = head->next; p != NULL; p = p->next )
        printf( "%4d", p->data );
   printf( "\n");
}



/* Initialize the list. */
/* Create a dummy node to simplify insertion and deletion. */
/* After the list is created, pointers head and tail both point to the dummy node. */
/* Return NULL if a node cannot be created. */
/* Otherwise, return the pointer to the dummy node. */

List *init()
{
   head = ( List * ) malloc( sizeof( List ) );
   if ( head == NULL ) {
      prtError( "Insufficient memory!" );
      return( NULL );
   }
   head->data = -1;
   head->next = NULL;
   tail = head;
   return ( head );
}





/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/

/* Insert a new data element d into the list. */
/* Insert at the front of the list, right behind the dummy node. */
/* Return NULL if a new node cannot be created. */
/* Otherwise, return the pointer to the newly created node. */

List *insertFirst( int d )
{
 
    List *first ;
first=(List*) malloc(8); // reserves the space in memory to add this.
    List *second;
if(first == NULL) {


return NULL;


}
first->data=d;



if(tail == head){


tail = first;
head->next = first;
first->next = NULL;


}

else {
second = head->next;

head->next = first;

first->next = second;
}
return first;
   

}



/* Insert a new data element d into the list. */
/* Insert at the end of the list. */
/* Return NULL if a new node cannot be created. */
/* Otherwise, return the pointer to the newly created node. */

List *insertLast( int d )
{

 List *last; 
last = (List*) malloc(8);

if(last == NULL) {


return NULL;


}


last->data = d;
 last->next = NULL;

if(head==tail){
 tail = last;

head->next=last;

}

else {

List *swap =tail;

swap->next = last;

tail=last;

}

return last;

}



/* Remove the first element of the list, i.e., the node right behind the dummy node. */
/* Return -1 if the list is empty, i.e., containing only the dummy node, */
/* and display error message "Empty list!" on the standard output. */
/* Otherwise, return the data (integer) of the node to be remove. */

int removeFirst()
{
int result;

   if(head==tail){

prtError("Empty List!");
return -1;

}
else {


List *swap = head->next; // store the element that we need to remove in swap variable of type struct list.
if(swap == tail){

head->next = NULL;
tail = head;

}
else {


head->next = swap->next;
}
result = swap->data;

free(swap); // removes the memory space since we dont need it anymore.

return result;



}
}

/* Search the list for an element containing integer k. */
/* If found, return the pointer to that element.  Otherwise, return NULL. */
/* If there is more than one element containing k, return the pointer to the first encountered element. */

List *search( int k )
{

	List *result = malloc(8);
	result->data = 0;
	result->next = NULL;
	if(head == tail){return NULL;}
	List *find;


	for(find = head->next;find != NULL; find=find->next){

	if(find->data == k){

		result->data=find->data;
		return result;
	}


	}
		//printf("xxx- %d\n", result->data);
   return NULL;

}


/*************************** END OF FILE ***************************/


