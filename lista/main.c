#include "list.h"

int main(void){

	Node *pList = NULL;
	initList(&pList);
	insertAtFront(&pList, 1111);
	insertAtFront(&pList, 55);
	return 0;

}