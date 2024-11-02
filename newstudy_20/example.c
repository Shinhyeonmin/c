#include <stdio.h>
#include <stdlib.h>
#include "example.h"

//���Ḯ��Ʈ�� �����߰��Լ� append(��) --> �ǵڿ� �߰�
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

//�Լ� print�ϴ� printList()
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
	printf(" ]");
}

//���Ḯ��Ʈ�� �����߰��Լ� insert(��ġ, ��) --> ���ϴ� ��ġ�� �߰�
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

//���Ḯ��Ʈ ���� ���� �Լ� pop()


//���Ḯ��Ʈ ���Ұ��� �����ִ� �Լ� index()
int index(NODE* list, int idx)
{
	NODE* curr = list;
	while (idx--)
	{
		curr = curr->next;
	}
	return curr->data;
}
/*���� �Լ��� ��� ���� �� append�� insert�� ��ģ �Լ� add(��ġ, ��)
  ��ġ�� -1�� �ѱ�� �ǵ�, �װ� �ƴϸ� �ش� �ε����� �߰�*/
