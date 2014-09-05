#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h> //malloc (), free()

typedef enum boolean{
	FALSE,TRUE
}Boolean;

typedef struct node{
	int id;
	struct node *pNext;//self-referential structure
}Node;

void initList (Node **pList);//sets the list to empty or NULL
Boolean isEmpty(Node *pList);
Node * makeNode (int newData);//allocates memory dynamically, init memory
void printListIteractive(Node *pList);
Boolean insertAtFront (Node **pList, int newData);

#endif
