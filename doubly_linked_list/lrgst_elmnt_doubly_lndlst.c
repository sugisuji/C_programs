//Program to Find the Largest Element in a Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

int lrgst_elmnt(struct node *head)
{
	if(head == '\0')
	{
		return -1;
		
	} else {
		struct node *temp = head;
	
		int big = temp -> data;

		while(temp != '\0')
		{		
			if(big < (temp -> data))
				big = temp -> data;
			
			temp = temp -> next;
		}

		return big;
	}
	
}

void add_node(struct node **head, int data)
{
	struct node *buff = (struct node*)malloc(sizeof(struct node));
	buff -> data = data;	

	if(*head == '\0')
	{
		buff -> prev = *head;
		buff -> next = *head;
		*head = buff; 
		
	} else {
		
		struct node *temp = *head;
		
		while((temp -> next) != '\0')
		{
			temp = temp -> next;	
		}
		
		buff -> prev = temp; 
		buff -> next = temp -> next;
		temp -> next = buff;
	}
}

void display(struct node *head)
{
	int i = 0;
	
	if(head == '\0')
	{
		printf("\n no node present\n");
		
	} else {
		
		struct node *temp = head;
		
		while(temp != '\0')
		{
			printf("\ndata %d : %d\n", i++, temp -> data);
				temp = temp -> next;
		}
	}
}

int main()
{
	int choice;
	int data;
	
	struct node *head = '\0';
	
	while(1)
	{
		printf("\nenter your choice :: add_node = 1 ; to_find_largest_element = 2 ; display = 3 ; exit = 0\n");
		scanf("%d", &choice);
		
		if(choice == 0)
			break;
			
		switch(choice)
		{
			case 1:
				printf("\nenter the data\n");
				scanf("%d", &data);
				add_node(&head, data);
				break;
			
			case 2:
				data = lrgst_elmnt(head);
				if(data == -1)
					printf("\nunder flow\n");
				else
					printf("\n largest element in the node is : %d\n", data);
				break;
			
			case 3:
				display(head);
				break;
				
			default :
				printf("\n enter the right choice\n");
		}	
	}
}
