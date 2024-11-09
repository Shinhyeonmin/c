#include <stdio.h>
#include <stdlib.h>
#include "example.h"

//연결리스트에 원소추가함수 append(값) --> 맨뒤에 추가
void append(NODE** a, int val) 
{
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->data = val;
	node->next = NULL;

	if (*a == NULL)
	{
		*a = node;
	}
	else
	{
		NODE* new = *a;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = node;
	}
}

//함수 print하는 printList()
void printList(NODE* lists)
{
	NODE* first = lists;
	printf("list = [ ");
	while (1)
	{
		printf("%d", first->data); 
		if (first->next == NULL)
			break;
		printf(", ");
		first = first->next;
	}
	printf(" ]\n");
}

//연결리스트에 원소추가함수 insert(위치, 값) --> 원하는 위치에 추가
void insert(NODE** list, int address, int nums)
{
	NODE* n = (NODE*)malloc(sizeof(NODE));
	n->data = nums;

	if (address == 0)
	{
		n->next = *list;
		*list = n;
		return;
	}
	
	NODE* curr = *list;
	NODE* prev = NULL;
	while (address--)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = n;
	n->next = curr;
}

//연결리스트 원소 추출 함수 pop()
int pop(NODE** list, int idx)
{
	NODE* current = *list;
	NODE* previous = NULL;
	int val;

	if (idx == 0)
	{
		val = current->data;
		*list = current->next;
		return val;
	}
	else
	{
		for (int i = 0; i < idx; i++)
		{
			previous = current;
			current = current->next;
		}
		val = current->data;
		previous->next = current->next;
		return val;		
	}
	
}


//연결리스트 원소값을 돌려주는 함수 index()
int index(NODE* list, int idx)
{
	NODE* curr = list;
	while (idx--)
	{
		curr = curr->next;
	}
	return curr->data;
}
/*위의 함수를 모두 정의 후 append와 insert를 합친 함수 add(위치, 값)
  위치에 -1을 넘기면 맨뒤, 그게 아니면 해당 인덱스에 추가*/
