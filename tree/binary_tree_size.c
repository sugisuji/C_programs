//Program to Calculate Size of a Binary Tree
#include "tree_header.h"

int binary_tree_size(struct node *temp)
{	
	if(temp != '\0')
		return (1 + binary_tree_size(temp -> left) + binary_tree_size(temp -> right));
	else
		return 0;
}
