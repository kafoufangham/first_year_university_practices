#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("give a positive number n: \n");
		scanf(" %i",&n);
	}
	while(n<0);
	for(int j=1 ; j<=n ;j++)
	{
	for(int i=n-j ; i<n; i++ )
	{
		printf("a");
	}
	printf("\n");
	}
	}