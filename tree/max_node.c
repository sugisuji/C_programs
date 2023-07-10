//Program to Find Maximum Node of Binary Tree


#include "tree_header.h"

int max_nodes(struct node *temp)
{
	int tree_height = height(temp);
	int max_node = 1;
	
	while(tree_height--)
		max_node = 2 * max_node;
		
	return (max_node - 1);
}
