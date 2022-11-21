#include <stdio.h>

int main()
{	
	int n[100], size, ele, i, flag=0;
	
	printf("Enter the size of the array:");
	scanf("%d", &size);
	
	printf("\nEnter the %d elements:\n", size);
	for(i=0;i<size;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &n[i]);	
	}
	
	printf("\nEntered elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	
	printf("\n\nEnter the element you want to search:");
	scanf("%d", &ele);
	
	for(i=0;i<size;i++)
	{
		if(n[i]==ele)
		{
			printf("Element found at position %d\n", i+1);
			flag++;
		}
	}
	if(flag==0)
	{
		printf("Element not found\n");
	}
	
	return 0;
}
