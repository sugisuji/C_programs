//C Program to Count Leaf Nodes in a Binary Tree

#include "tree_header.h"

int leaf_nodes(struct node *temp)
{
	if(temp == '\0') {
		return 0;
	} else {
		
		int left = 0;
		int right = 0;
	
		left = leaf_nodes(temp -> left);
		right = leaf_nodes(temp -> right);
		
		if((left == 0) && (right == 0))
			printf("\n data = %d \n", temp -> data);
		else
			return 1;
	}
}
