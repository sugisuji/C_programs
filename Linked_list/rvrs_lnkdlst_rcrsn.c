//Program to Reverse a Linked List using Recursion

#include "linked_list.h"

struct node* rvrs_node(struct node **head)
{
	if(*head == '\0')
	{	
		printf("\n no node present\n");
	
		return;	
	} else {
		
		struct node *node_ptr = (*head) -> next;
		struct node *temp = *head;
		struct node *buff = *head;
		static int i = 0;
		int temp = i;
		i++;
				
		if(node_ptr != '\0')
		{
			buff = rvrs_node(&(node_ptr));
			buff -> next = temp;
		}	
		return temp;

		if(i == 0)
		{
			while(buff != '\0')
				buff = buff -> next;
			(*head) -> next = '\0';
			*head = buff;
		}
	}
}
