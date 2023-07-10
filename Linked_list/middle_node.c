//C Program to Find Middle Node of a Linked List

#include "linked_list.h"

void middle_node(struct node *head)
{	
	if(head == '\0')
	{
		printf("\n no node present\n");
		return;	
	} 
	int i = 0;
	struct node *temp = head;
	
	int middle_node = lnkdlst_length(head) / 2 ;
	
	for(i = 0; i < middle_node ; i++)
		temp = temp -> next;
		
	printf("\ndata in middle node is %d\n", temp -> x);

}
