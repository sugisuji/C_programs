//Program to Find Nth Node from the End of a Linked List

#include "linked_list.h"

void end_nth_node(struct node *head , int node_num)
{
	int length = lnkdlst_length(head);
	
	if((head == '\0') || (node_num == 0) || (node_num > length))
	{
		printf("\n no node present\n");
		return;	
	} 
	int i = 0;
	struct node *temp = head;
	
	int node_num_to_find ;
	
	node_num_to_find = length - node_num;
	
	for(i = 0; i < node_num_to_find; i++)
		temp = temp -> next;
		
	printf("\ndata in %d node is %d\n", node_num , temp -> x);

}
