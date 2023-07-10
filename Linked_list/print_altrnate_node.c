//Program to Print Alternate Nodes of Linked List

#include "linked_list.h"

void print_altrnat_node(struct node *head)
{
	if(head == '\0')
	{
		printf("\n no node present\n");
		return;	
	} 
	int i = 1;
	struct node *temp = head;
	
	while((temp != '\0') && (temp -> next != '\0'))
	{
		printf("\ndata %d : %d\n", i+2, temp -> x);
		temp = temp -> next -> next;
	}
}
