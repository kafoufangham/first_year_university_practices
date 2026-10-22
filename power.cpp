#include<stdio.h>
int main()
{
	int n,i;
	float x,p;
	printf("donnez la valeur de x: ");
	scanf(" %f",&x);
	printf("%f to the power of :",x);
	scanf("%i",&n);
	p=1;
	for(int i=1 ;i<=n ;i++)
	{
	p=x*p;
	}
	printf("the result is:%f",p);
}