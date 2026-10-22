#include<stdio.h>
int main ()
{
	int n,i;
	printf("enter a value: ");
	scanf(" %i",&n);
	for(int i=n-1;i>=1;i--)
	{
		n=n*i;
	}
	printf("the result is:%i",n);
}