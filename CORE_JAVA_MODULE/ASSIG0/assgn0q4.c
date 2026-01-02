//4. Write a C program to swap two numbers using a temporary third variable.
#include<stdio.h>
int main()
{
	int a, b,temp;
	
	a=10;
	b=20;
	
	temp=a;
	a=b;
	b=temp;
	printf("%d",a);
	printf("%d",b);
}
