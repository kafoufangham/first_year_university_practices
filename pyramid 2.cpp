#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("give a positive number n : \n");
		scanf("%i",&n);
	}
	while(n<0);
	for(int i=0 ;i<n ;i++)
	{
		for(int j=0+i ;j<n ;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}