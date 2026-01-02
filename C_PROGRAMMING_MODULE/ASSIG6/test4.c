//write a program to print factor of number in given range e.g;-range 10 to 15
#include<stdio.h>
void fact(int );
void power(int );
//void main()
//{
//	int range;
//	printf("enter the range between 10 t0 15");
//	scanf("%d",range);
//	fact(range);
//}
//void fact(int a)
//{
//	while(a>0)
//	{
//	int fact=fact*a*a;
//	a++;
//	}
//	printf("the factorial is %d \n",fact);
//}


void main()
{
	int no;
	printf("enter the any number");
	scanf("%d",no);
	power(no);
}
void power(int no)
{
	int pow=no*no*2;
	printf("the give %d power is %d\n",no,pow);
}