#include "list.h"

void iniList (Node **pList){
	*pList = NULL;
}

Boolean isEmpty (Node * pList){
	Boolean status = FALSE;

	if(pList == NULL){
		status = TRUE;
	}

	return status;
}
//We need to finish MakeNode (). Add error checking
Node * MakeNode (int newData)
{
	Node *pMem = NULL;
	pMem = (Node *) malloc (sizeof(Node));// tried to allocate

	if(pMem != NULL){//able to allocate memory
		pMem->id = newData;
		pMem->pNext = NULL;
	}

	return pMem;
}
void printListIteractive(Node *pList){
	while(pList != NULL){
		printf("--> %d ", pList->id);
		printf("--> %d ", pList->pNext);
		pList = pList->pNext;
	}
	printf("--> NULL \n");
}
Boolean insertAtFront (Node **pList, int newData){
	Node *pMem = NULL;
	Boolean success = FALSE;
	pMem = MakeNode(newData);

	if(pMem != NULL){//we are able to allocate a node sucessfully
		success = TRUE;
		pMem ->pNext = *pList;
		*pList = pMem;


	}
	return success;
}