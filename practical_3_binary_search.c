#include <stdio.h>

int main()
{
	int n[100], size, ele, i, j, mid, lowr, highr, flag=0, temp;
	
	printf("Enter the size of the array:");
	scanf("%d", &size);
	
	printf("\nEnter the %d elements:\n", size);
	for(i=0;i<size;i++)
	{
		printf("Enter element %d:", i+1);
		scanf("%d", &n[i]);	
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
	
	printf("\nEntered elements after sorting are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t", n[i]);
	}
	
	printf("\n\nEnter the element you want to search:");
	scanf("%d", &ele);
	
	lowr=0;
	highr=size-1;
	while(lowr<=highr)
	{
		// lowr + highr may lead to overflow
		// mid=(lowr+highr)/2; 
		mid=(lowr+(high-low))/2; // Avoid overflow
		
		if(ele==n[mid])
		{
			printf("Element found at position %d\n", mid+1);
			flag++;
			break;
		}
		else if(ele>n[mid])
		{
			lowr=mid+1;
		}
		else if(ele<n[mid])
		{
			highr=mid-1;
		}
	}
	if(flag==0)
		printf("Element not found\n");
	
	return 0;
}
