#include<stdio.h>
void main()
{
	int a=10,b=20;
	printf("%d%d \n",a,b);
	swap(&a,&b);
	printf("%d%d \n",a,b);
}

void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}