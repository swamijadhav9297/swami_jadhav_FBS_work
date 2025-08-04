#include<stdio.h>
void main()
{
	for(int i=1;i<=100;i++)
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
		printf("perfect \n");
	}
	}
}