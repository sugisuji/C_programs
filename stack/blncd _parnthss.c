//C program to Check for balanced Parentheses in an Expression using Stack

#include <stdio.h>
#include <string.h>

static int top = -1;

void push(char *stack, char input)
{
	top++;
	stack[top] = input;
}

int pop(char *stack)
{
	if(top == -1)
	{
		return -1;
			
	} else {
		stack[top] = 0;
		top--;
	}
	
	return 0;
	
}

int blncd_prnths_check(char *stack, char *str)
{
	int i;
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == '{')
		{
			push(stack, str[i]);
			
		} else if(str[i] == '}') {
		
			if(pop(stack) == -1)
				return -1;
		}
	}
	
	if(top == -1)
		return 1;
	else
		return -1;
	
}


int main()
{ 
	char *string;
	int stack_size;
	
	printf("\nenter stack size you need\n");
	scanf("%d", &stack_size);
	
	char stack[stack_size];
	int str_len = 0;
	
	repeat:				
	printf("\n enter the string\n");
	scanf("%s", string);
	
	str_len = strlen(string);
	
	if(stack_size < str_len)
	{
		printf("\n stack over flow\n");
		printf("\n enter string with in the stack range\n");
		goto repeat;
	}


	if(blncd_prnths_check(stack, string) == 1)
		printf("\nHas balanced Parentheses in an Expression\n ");
	else
		printf("\nNo balanced Parentheses in an Expression\n ");

}
