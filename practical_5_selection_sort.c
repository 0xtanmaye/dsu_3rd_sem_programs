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
	
	for(i=0;i<(size-1);i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	
	printf("\n\nEntered elements after selection sort:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	printf("\n");
	
	return 0;
}
