//9. Complex (real, imaginary)
#include<stdio.h>
#include<string.h>
struct student
{
	int real;
	double imaginary;
};
void main()
{
	struct student c1,c2;
	
	c1.real=4;
	c1.imaginary=8213;
	printf("real=%d imaginary=%lf",	c1.real,c1.imaginary);
	
	printf("\n Enter the complex 2 values :-");
	scanf("%d",&c2.real);
	scanf("%s",&c2.imaginary);
	printf("real=%d imaginary=%lf",	c2.real,c2.imaginary);
}