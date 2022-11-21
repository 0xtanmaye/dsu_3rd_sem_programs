#include <stdio.h>

int main()
{
	int n[100], size, i, j, temp;
	
	printf("Enter the size of the array:");
	scanf("%d", &size);
	
	printf("\nEnter the %d elements:\n", size);
	for(i=0;i<size;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &n[i]);	
	}
	
	printf("\nEntered elements before sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	
	for(i=size-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	
	printf("\n\nEntered elements after bubble sort:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	
	return 0;
}
