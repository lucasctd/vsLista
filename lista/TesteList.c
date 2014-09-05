#include "TestList.h"
#include "list.h"

void testIsEmptyOnEmptyList (void){
	Node *pList = NULL;
	Boolean status = FALSE;
	status = isEmpty(pList);
	if(status = FALSE){
		printf("test case passed! \n");
	}else{
		printf("test case failed! \n");
	}

}

