#include <stdio.h>

typedef struct linknd {
	
	int data;
	
	void *next;
	//strust inked next;
	
} linknd_t;

static linknd_t *list; //inknd lisk 

linknd_t* create_node(int value){
	linknd_t* ndPtr;
	
	//동적 메모리 할당 
	ndPtr =  (linknd_t*)malloc(sizeof (linknd_t));
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	//정수값 저장
	ndPtr -> data = value;
	ndPtr -> next = NULL;
	
	
	return ndPtr; 
}



void addTail(int value)
{
	linknd_t *ndPtr, *newPtr;
	
	if(list == NULL)
	{
		return;	//list가 생성한 node를 가리키도록 함; 
	}
	
	else
	{
		ndPtr = list;
		while(ndPtr -> next != NULL){
			ndPtr=ndPtr->next;
		} 
		newPtr = create_node(value);
		ndPtr -> next = newPtr;
	}
}









