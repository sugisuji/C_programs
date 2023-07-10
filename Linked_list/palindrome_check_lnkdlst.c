//Program to Check if a Singly Linked List is Palindrome

#include "linked_list.h"

int plndrm_check(struct node *head)
{
	struct node *temp = head;
	
	while(temp != '\0')
		plndrm_check(temp -> next);
}
