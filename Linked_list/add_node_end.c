//Inserting a node at end of linked List

#include "linked_list.h"

void addnode_end(struct node **head, int data)
{
	
	if(*head == '\0')
	{
		addnode_front(head, data);
			
	} else {
		
		struct node *buff = (struct node*)malloc(sizeof(struct node));
		buff -> x = data;
	
		struct node *temp = *head;
		
		while((temp -> next) != '\0')
		{
			temp = temp -> next;
		}
		
		buff -> next = temp -> next;
		temp -> next = buff;
	}

}
