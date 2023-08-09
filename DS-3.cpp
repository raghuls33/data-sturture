#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fact=1,i,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",n,fact);
}
