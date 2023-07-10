//C Program to Implement a Stack using Singly Linked List

#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int x;
	struct stack *next;
};

struct stack push(struct stack **head, int val)
{
	struct stack *buff = (struct stack*)malloc(sizeof(struct stack));
	
	buff -> x = val;
	
	if(*head == '\0')
	{
		buff -> next = *head;
		
		*head = buff; 
	}
	else
	{
		struct stack *temp = *head;
		
		while(temp -> next != '\0')
		{
			temp = temp -> next;
		}
		
		buff -> next = temp -> next;
		temp -> next = buff;
	}	
}

int pop(struct stack **head)
{
	int value;
	struct stack *temp = *head;
		
		
	if(temp -> next == '\0')
	{
//		printf("\n I am here  in if\n");
		value = temp -> x;
		*head = temp -> next;
		 
		free(temp);
		temp = '\0';
	}
	else
	{
//	printf("\n I am here  in else\n");
		while(temp -> next -> next != '\0')
		{
			temp = temp -> next;
		}
		
		value = temp -> next -> x;
			
		free(temp -> next);
		temp -> next = '\0'; 
	}
	
	return value;	
}


int main()
{
	int stack_size = 0;
	int top = 0;
	int choice = 0;
	
	struct stack *head = '\0';
	int value;
	
	printf("\nenter the size of stack you need\n");
	scanf("%d", &stack_size);

	
	while(1)
	{
		printf("\nenter your choice push = 1, pop = 2, exit = 3\n");
		scanf("%d", &choice);
		
		if(choice == 3)
		{
			break;
		}
		else{
		
			switch(choice)
			{	
				case 1:
					if(stack_size == top)
					{
						printf("\n stack over flow\n");
						break;
					} else
					{
						printf("\n enter your input to push\n");
						scanf("%d", &value);
						
						push(&head, value);
						top++;
						break;
					}
				case 2: 
					if(top == 0)
					{
						printf("\n stack under flow\n");
						break;
					} else
					{
						value = pop(&head);
						top--;
						printf("\n value poped from the stack is %d", value);
						break;
					}
			}
		}
	
	}

	
}
