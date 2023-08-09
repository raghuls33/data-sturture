#include<stdio.h>
#include<stdlib.h>
void fibonnaci(int n)
{ if(n>0)
{
	static int n1=0,n2=1,n3;
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d ",n3);
	fibonnaci(n-1);
}
}
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("\nFibonnaci series %d %d ",0,1);
	fibonnaci(n-2);
	return 0;
}

