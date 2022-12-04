/* Author:EXOR */
#include <stdio.h>

#define SIZE 5

int pop();
int push(int);

int stack[SIZE], top=-1;

int main()
{
	int i, val, choice;
	
	printf("Stack Operations:\n");
	do
	{
		fflush(stdin);
		printf("\nEnter the operation you want to perform(1-push, 2-pop, 3-view, 4-exit):");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				if(top==SIZE-1)
				{
					printf("Cannot perform push operation, stack is full\n");
				}
				else
				{
					printf("Enter the value you want to push:");
					scanf("%d", &val);
					val=push(val);
					printf("%d pushed to the stack\n", val);
				}
				break;
			case 2:
				if(top==-1)
				{
					printf("Cannot perform pop operation, stack is empty\n");
				}
				else
				{
					val=pop();
					printf("%d popped from the stack\n", val);
				}
				break;
			case 3:
				if(top==-1)
				{
					printf("The stack is empty\n");
				}
				else
				{
					printf("The elements in the stack are:\n");
					for(i=top;i>=0;i--)
					{
						printf("%d\n", stack[i]);
					}
				}
				break;
			case 4:
				printf("Exitting...\n");
				break;
			default:
				printf("Invalid choice, enter a valid choice\n");
		}
		
	} while(choice!=4);
	
	return 0;
}

int pop()
{
	if(top==-1)
	{
		return;
	}
	else
	{
		int val;
		val=stack[top];
		top--;
		return val;
	}
}

int push(int val)
{
	if(top==SIZE-1)
	{
		return;
	}
	else
	{
		top++;
		stack[top]=val;
		return stack[top];
	}
}
