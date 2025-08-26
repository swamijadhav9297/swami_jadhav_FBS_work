//3. Admin (id, name, salary, allowance)
#include<stdio.h>
struct student
{
	int id;
	char name[20];
	double salary;
	double allowance	
};
void main()
{
	struct student a1,a2;
	
	a1.id=10109;
	strcpy(a1.name,"swami");
	a1.salary=7509077;
	a1.allowance=2838;
	printf("id=%d name=%s salary=%lf allowance=%lf",a1.id,a1.name,a1.salary,a1.allowance);
	
	printf("\n Enter the admin 2 values");
	scanf("%d",&a2.id);
	scanf("%s",&a2.name);
	scanf("%lf",&a2.salary);
	scanf("%lf",&a2.allowance);
	printf("id=%d name=%s salary=%lf allowance=%lf",a2.id,a2.name,a2.salary,a2.allowance);
}