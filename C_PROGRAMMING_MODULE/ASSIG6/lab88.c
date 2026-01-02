#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number");
	scanf("%d",n);
	int res=isprime(n);
	if(res==1)
	{
		printf("prime \n");
	}
	else
	{
		printf("not prime \n");
	}
}
 int isprime(int n)
{
if(n<=1)
	{
		start=0;
	}
	else
	{
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				start=0;
				break;
			}
		}
	}	
}

	
		printf("\n");
}