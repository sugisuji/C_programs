//Program to Find Height of a Binary Tree

#include "tree_header.h"

int height(struct node *temp)
{
	if(temp == '\0') {
		return 0;
	} else {
		
		int left_height = 0;
		int right_height = 0;
	
	
		left_height = height(temp -> left);
		right_height = height(temp -> right);
		
		if(left_height > right_height)
			return left_height + 1;
		else
			return right_height + 1;
	}
}
