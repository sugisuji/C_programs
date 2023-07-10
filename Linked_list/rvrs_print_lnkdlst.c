//Print a Linked List in Reverse Order using Recursion
#include "linked_list.h"

void rvrs_node_print(struct node *temp)
{
	static int i = 0;
	if(temp == '\0')
	{	
		printf("\n no node present\n");
	
		return;	
	} else {

		if(temp -> next != '\0')
			rvrs_node_print(temp -> next);
			
		printf("\ndata %d : %d\n", i++, temp -> x);
	}
}
