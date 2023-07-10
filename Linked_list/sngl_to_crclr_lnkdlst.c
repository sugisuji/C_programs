//Convert a Singly Linked List to Circular Linked List


#include "linked_list.h"

void sngl_to_crclr(struct node **head)
{	
	if(*head == '\0')
	{
		printf("\n no node present\n");
		return;	
	} 
	
	struct node *temp = *head;
	
	while(temp -> next != '\0')
		temp = temp -> next;
		
	temp -> next = *head;

}
