//C Program to Insert a node in  a Tree

#include "tree_header.h"

void add_node(struct node **head, int data)
{
	struct node *buff = (struct node*)malloc(sizeof(struct node));
	buff -> data = data;
	buff -> left = '\0';
	buff -> right = '\0';
		
	if(*head == '\0')
	{
		buff -> left = *head;
		buff -> right = *head;
		*head = buff; 
	} else {
		
		struct node *temp = *head;

		while(1)
		{	
			if((buff -> data) < (temp -> data))
			{
				if(temp -> left == '\0')
					break;
				else
					temp = temp -> left;
				
			} else {
				
				if(temp -> right == '\0')
					break;
				else
					temp = temp -> right;
			}
		}
		if((buff -> data) < (temp -> data))
			temp -> left = buff;
		else
			temp -> right = buff;
	}
}

