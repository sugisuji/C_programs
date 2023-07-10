//Program to Reverse a Linked List using Loop

#include "linked_list.h"

void reverse_node(struct node **head)
{
	if(*head == '\0')
	{	
		printf("\n no node present\n");
	
		return;	
	} else {
		
		struct node *temp = *head;
		struct node *buff = temp -> next;		
		struct node *node_ptr;
		
		while(buff != '\0')
		{
			node_ptr = buff -> next;
			buff -> next = temp;
			temp = buff;
			buff = node_ptr;
		}
		(*head) -> next = buff;
		*head = temp;
	}
}

