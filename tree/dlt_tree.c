//C Program to Delete a Binary Tree using Recursion

#include "tree_header.h"

void dlt_tree(struct node **temp)
{
	if(*temp != '\0')
	{
		if((*temp) -> left != '\0')
			dlt_tree(&((*temp) -> left));
		if((*temp) -> right != '\0')
			dlt_tree(&((*temp) -> right));
	
		free(*temp);
		*temp = '\0';
	}
}
