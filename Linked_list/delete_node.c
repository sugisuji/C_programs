//Delete a Node from a Singly Linked List
#include "linked_list.h"

void delete_node(struct node **head, int node)
{
	int i = 0;
	
	if((*head == '\0') || (node == 0))
	{
		
		printf("\n no node present\n");
	
		return;
		
	} else {
		
		struct node *temp = *head;
	
		if(node == 1)
		{
			*head = temp -> next;
			
			free(temp);
			temp = '\0';	
		} else {
			
			struct node *buff;
			for(i = 1; i < node ; i++)
			{	
				buff = temp;
				temp = temp -> next;
				if(temp == '\0') {
					printf("\n no node present\n");
					return;
				} 
			}
			buff -> next = temp -> next;
			
			free(temp);
			temp ='\0';
		}
	}
}
