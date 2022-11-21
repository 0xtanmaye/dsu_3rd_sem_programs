#include <stdio.h>

#define SIZE 5

int queue[SIZE], front=-1, rear=-1;

int insert(int val)
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
		return val;
	}
	else
	{
		rear++;
		queue[rear]=val;
		return val;
	}
}

int remove()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		return;
	}
	else if(front==rear)
	{
		ele=queue[rear];
		
	}
	else
	{
		ele=queue[front];
		front++;
	}
}
