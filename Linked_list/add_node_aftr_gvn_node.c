//Inserting a node after a given node in linked List

#include "linked_list.h"

void addnode_gvn_pstn(struct node **head, int data, int node_postn)
{
	int i = 0;
	
	if((*head == '\0') && (node_postn != 0)) {
		
		printf("\n no node present\n");
	
		return;
		
	} else {
		
		struct node *buff = (struct node*)malloc(sizeof(struct node));
		buff -> x = data;

		if(node_postn == 0)
		{
			buff -> next = *head;
			*head = buff;
			
		} else {
			struct node *temp = *head;
		
			for(i = 1; i < node_postn; i++)
			{
				temp = temp -> next;
				if(temp == '\0') {
					printf("\n no node present\n");
					return;
				} 
			}
		
			buff -> next = temp -> next;
			temp -> next = buff;
		}
	}

}

