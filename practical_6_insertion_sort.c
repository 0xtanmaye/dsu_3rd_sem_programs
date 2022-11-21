#include <stdio.h>

int main()
{
	int n[100], i, j, key, size;
	
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
	
	for(i=1;i<size;i++)
	{
		key=n[i];
		j=i-1;
		
		while(j>=0 && n[j]>key)
		{
			n[j+1]=n[j];
			j--;
		}
		
		n[j+1]=key;
	}
	
	printf("\nEntered elements after insertion sort:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	
	return 0;
}
