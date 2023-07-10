//Display nodes in linked list

#include "linked_list.h"


void display(struct node *head)
{
	if(head == '\0')
	{
		printf("\n no node present\n");
		return;	
	} 
	int i = 1;
	struct node *temp = head;
	
	while(temp != '\0')
	{
		printf("\ndata %d : %d\n", i++, temp -> x);
		temp = temp -> next;
	}

}
