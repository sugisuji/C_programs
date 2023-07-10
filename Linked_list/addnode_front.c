//Inserting a node at front of linked List

#include "linked_list.h"

void addnode_front(struct node **head, int data)
{
	struct node *buff = (struct node*)malloc(sizeof(struct node));
	buff -> x = data;
		
	buff -> next = *head;
	*head = buff;

}

