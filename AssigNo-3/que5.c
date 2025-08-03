#include<stdio.h>
void main()
{
 int no=131;
 int temp=no;
 int sum=0,rem,rev;
 
 	while(no !=0)
	{
	rem=no%10;
	sum=sum+rev*rev*rev;
	rev=rev*10+rem;
	no=no/10;
	}
	if(temp==rev)
	{
		printf("Armstrong \n");
	}
	else
	{
		printf(" not Armstrong \n");

	}
}