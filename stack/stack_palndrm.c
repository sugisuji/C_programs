// C Program to Check String is Palindrome using Stack
#include <stdio.h>

static int top = -1;

void push(char *stack, char input)
{
	top++;
	stack[top] = input;
}

char pop(char *stack)
{
	char value;
	
	value = stack[top];
	top--;
	
	return value;
}

int plndrm_check(char *stack, char *string)
{
	int i;
	
	for(i = 0; i <= top; i++)
	{
	
		if(string[i] != pop(stack))
			return -1;
	}
	
	return 1;
	
}


int main()
{ 
	char *string;
	int stack_size;
	int i = 0;
	
	printf("\nenter stack size you need\n");
	scanf("%d", &stack_size);
	
	char stack[stack_size];
	
	repeat:						
	printf("\n enter the string\n");
	scanf("%s", string);


	for(i = 0; string[i] != '\0'; i++)
	{
		if((stack_size - 1) == top)
		{
			printf("\n stack over flow\n");
			printf("\n enter string with in the stack range\n");
			top = -1;
			goto repeat;
			
		} else {
		
			push(stack, string[i]);
		}
	}

	if(plndrm_check(stack, string) == 1)
		printf("\ngiven string is palindrome\n ");
	else
		printf("\ngiven string is not palindrome\n ");

}
