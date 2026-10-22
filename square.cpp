#include<stdio.h>
int main()
{
	int n,i;
	printf("what is n :");
	do
	{
	scanf("%i",&n);
	}
	while(n<0);
	for(int j=0;j<n;j++)
	{
	for(int i=0;i<n;i++)
	{
		printf("#\t");
	}
	printf("\n\t");
	}
}