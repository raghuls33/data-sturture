#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("enter the no.of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even numbers in array are:\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		printf("%d ",arr[i]);
		}
	}
	printf("\nODD numbers in array are:\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
		printf("%d ",arr[i]);
	    }
	}
}
