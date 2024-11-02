#pragma once
#ifndef EXAMPLE_H
#define EXAMPLE_H

typedef struct node
{
	int data;
	struct node* next;
}NODE;

void append(NODE** a, int val);
void printList(NODE* lists);
int index(NODE* list, int idx);
void insert(NODE** list, int address, int nums);

#endif