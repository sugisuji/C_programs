//Find Length of a Linked List using Recursion
#include "linked_list.h"

int lnkdlst_length(struct node *temp)
{
	int count = 0;
	
	if(temp != '\0')
		return (1 + lnkdlst_length(temp -> next));
}
