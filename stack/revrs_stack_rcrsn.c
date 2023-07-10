// C Program to Reverse a Stack using Recursion
#include <stdio.h>
static int top = -1;

void push(int *stack, int value)
{
	top++;
	stack[top] = value;
}

int pop(int *stack)
{
	int value;
	
	value = stack[top];
	top--;
	
	return value;
}

void display(int *stack)
{
	int i;
	
	for(i = 0; i <= top; i++)
	{
		printf("\n%d ", stack[i]);		
	}
	printf("\n");
}

void reverse(int *stack, int top_num)
{
	static int i = 0;
	int temp = 0;
	
	if(top != -1)
	{ 	
		temp = stack[i];
		stack[i] = stack[top_num];
		stack[top_num] = temp;
		i++;
			
		if(i < top_num)
			reverse(stack, --top_num);

	}
	else
	{
		printf("\nstack under flow\n");
	}
	
}


int main()
{
	int choice = 0; 
	int value;
	int stack_size;
	
	printf("\nenter stack size you need\n");
	scanf("%d", &stack_size);
	
	int stack[stack_size];
	
	while(1)
	{
		printf("\nenter your choice push = 1, pop = 2, exit = 0\n");
		printf("display stack elements = 3, reverse a stack and print elements = 4\n");
		scanf("%d", &choice);
		
		if(choice == 0)
		{
			break;
		}
		else{
		
			switch(choice)
			{	
				case 1:
					if((stack_size - 1) == top)
					{
						printf("\n stack over flow\n");
						
					} else {
						
						printf("\n enter your input to push\n");
						scanf("%d", &value);	
						push(stack, value);
						
					}
					break;
					
				case 2: 
					if(top == -1)
					{
						printf("\n stack under flow\n");
					
					} else {
						
						value = pop(stack);
						printf("\n value poped from the stack is %d\n", value);
					}
					break;
				
				case 3:
					display(stack);
					break;
				
				case 4:
					reverse(stack, top);
					break;
					
				default :
					printf("\nEnter the right choice\n");
					break;
			}
		}
	}
}
