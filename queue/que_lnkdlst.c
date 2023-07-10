//C Program to Implement a Queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct queue
{ 
	int x;
	struct queue *next;
};

static struct queue *head = '\0';
static struct queue *tail = '\0';

void enqueue(int val)
{
	struct queue *buff = (struct queue*)malloc(sizeof(struct queue));
	
	buff -> x = val;
	
	if(head == '\0')
	{
		buff -> next = head;
		head = buff; 
		tail = buff;
	}
	else
	{		
		buff -> next = tail -> next;
		tail -> next = buff;
		tail = buff;
	}	
}

int dequeue()
{
	int value;
	struct stack *temp;
			
	if(head == '\0')
	{
		return '\0';

	} else {

		value = head -> x;
		temp = head;
		head = head -> next;
		 
		free(temp);
		temp = '\0';
	}
	
	return value;	
}


int main()
{
	int choice = 0;
	int data;	

	while(1)
	{
		printf("\nenter your choice enqueue = 1, dequeue = 2, exit = 3\n");
		scanf("%d", &choice);
		
		if(choice == 3)
		{
			break;
		}
		else{
		
			switch(choice)
			{	
				case 1:
					printf("\n enter your input to enqueue\n");
					scanf("%d", &data);
						
					enqueue(data);
					break;
					
				case 2: 
					data = dequeue();
					if(data == '\0')
						printf("\n queue under flow\n");
					else
						printf("\ndata dequeued from the queue is %d\n", data);
						
					break;		
			}
		}
	}
}
