//Program to Check if Two Trees are Identical

#include "tree_header.h"

void display(struct node *temp)
{
	if(temp == '\0')
	{
		printf("\n no node present\n");
		return;
	}
	if(temp -> left != '\0')
		display(temp -> left);
	
	printf("\n data = %d \n", temp -> data);
	
	if(temp -> right != '\0')
		display(temp -> right);

}
