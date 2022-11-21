#include <stdio.h>

int main()
{
	int n[5], i;
	
	printf("Enter the 5 elements for array:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &n[i]);
	}
	
	printf("\nThe entered elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t", n[i]);
	}
	
	return 0;
}
