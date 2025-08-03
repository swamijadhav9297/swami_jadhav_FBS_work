#include<stdio.h>
void main()
{
	int n=5;
	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact of %d = %lld \n",n,fact );
}