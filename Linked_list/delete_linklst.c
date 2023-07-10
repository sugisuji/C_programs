//Write a Program to Delete a Linked list

#include "linked_list.h"

void dlt_lnkd_lst(struct node **head)
{	
	struct node *temp = *head;
	
	while(*head != '\0')
	{
		*head = (*head)-> next;	
		free(temp);
		temp ='\0';
		temp = *head;
	}
}
