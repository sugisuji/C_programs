//Program to Find Diameter of a Binary Tree

#include "tree_header.h"

int diameter(struct node *temp)
{
	if(temp == '\0') {
		return 0;
	} else {
		
		int left_height = 0;
		int right_height = 0;
		
		left_height = height(temp -> left);
		right_height = height(temp -> right);
		
		return (left_height + right_height);
	}
}
