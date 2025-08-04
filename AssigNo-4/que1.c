#include<stdio.h>
void main()
{
for(int i=1;i<=10;i++)
{

	int no=124;
	int count;
	int temp=no;
	int sum,rem;
	int res=1;
	while(no>0)
	{
		count++;
		no=no/10;
		
	}
	while(no>0)
	{
		res=no%10;
		int res=1;
		for(int i=1;i<=count;i++)
		res=res*rem;
		sum=sum+res;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("%d is the armstrong \n",temp);
	}
 }
}