//Convert a Singly Linked List to Circular Linked List


#include "linked_list.h"

void crclr_to_sngl(struct node **head)
{	
	if(*head == '\0')
	{
		printf("\n no node present\n");
		return;	
	} 
	
	struct node *temp = *head;
	
	while(temp -> next != (*head))
		temp = temp -> next;
		
	temp -> next = '\0';

}
