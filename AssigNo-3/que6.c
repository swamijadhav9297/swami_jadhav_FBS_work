#include<stdio.h>
void main()
{
	int n=28,i,sum=0;
	
	for(i=1;i<n;i++)
	{
		if(n % i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("the number is perfect");
	}
	else
	{
		printf("the number is not perfect");

	}
}