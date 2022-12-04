#include <stdio.h>

#define SIZE 5

int queue[SIZE], front=-1, rear=-1;
 
int enqueue(int ele)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=(rear+1)%SIZE;
		queue[rear]=ele;
	}
	else if((rear+1)%SIZE==front)
	{
		return;
	}
	else
	{
		rear=(rear+1)%SIZE;
		queue[rear]=ele;
	}
	return ele;
}

int dequeue()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		return;
	}
	else if(front==rear)
	{
		ele=queue[front];
		front=-1;
		rear=-1;
	}
	else
	{
		ele=queue[front];
		front=(front+1)%SIZE;
	}
	return ele;
}

void display_queue()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty, cannot display\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
			printf("%d\t", queue[i]);
		
		printf("\n");
	}
}

int main()
{
	int ele, choice;
	
	do
	{
		fflush(stdin);
		printf("\nEnter the operation you want to perform(1-insert, 2-delete, 3-view, 4-exit):");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				if((rear+1)%SIZE==front)
				{
					printf("Queue is full, cannot perform insertion\n");
				}
				else
				{
					printf("Enter the element you want to insert:");
					scanf("%d", &ele);
					ele=enqueue(ele);
					printf("%d inserted in the queue\n", ele);	
				}
				break;
				
			case 2:
				if(front==-1 && rear==-1)
				{
					printf("Queue is empty, cannot perform deletion\n");
				}
				else
				{
					ele=dequeue();
					printf("%d deleted\n", ele);
				}
				break;
				
			case 3:
				display_queue();		
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
