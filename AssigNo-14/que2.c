//2. Employee (id, name, salary)
#include<stdio.h>
struct student
{
	int id;
	char name[20];
	double salary;	
};
void main()
{
	struct student e1,e2;
	
	e1.id=10109;
	strcpy(e1.name,"swami");
	e1.salary=7509077;
	printf("id=%d name=%s salary=%lf",e1.id,e1.name,e1.salary);
	
	printf("\n Enter the employe 2 values");
	scanf("%d",&e2.id);
	scanf("%s",&e2.name);
	scanf("%lf",&e2.salary);
	printf("id=%d name=%s salary=%lf",e2.id,e2.name,e2.salary);
}