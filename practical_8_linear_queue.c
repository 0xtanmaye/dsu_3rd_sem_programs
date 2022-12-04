#include <stdio.h>

#define SIZE 5

int queue[SIZE], front=-1, rear=-1;

int enqueue(int val)
{
	if(rear==SIZE-1)
	{
		return;
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
		return queue[rear];
	}
	else
	{
		rear++;
		queue[rear]=val;
		return queue[rear];
	}
}

int dequeue()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		return;
	}
	else if(rear==SIZE-1 && front==rear)
	{
		ele=queue[rear];
		front=-1;
		rear=-1;
		return ele;
	}
	else
	{
		ele=queue[front];
		front++;
		return ele;
	}
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
		printf("\nEnter the operation you want to perform(1-enqueue, 2-dequeue, 3-display queue, 4-exit):");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				if(rear==SIZE-1)
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
