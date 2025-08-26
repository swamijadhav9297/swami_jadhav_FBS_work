//5. SalesManager (id, name, salary, incentive, target)

#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;	
};
void main()
{
	struct student sm1,sm2;
	
	sm1.id=10109;
	strcpy(sm1.name,"swami");
	sm1.salary=7509077;
	sm1.incentive=2838;
	sm1.target=95;
	printf("id=%d name=%s salary=%lf incentive=%lf target=%d",sm1.id,sm1.name,sm1.salary,sm1.incentive,sm1.target);
	
	printf("\n Enter the salesmanager 2 values :-");
	scanf("%d",&sm2.id);
	scanf("%s",&sm2.name);
	scanf("%lf",&sm2.salary);
	scanf("%lf",&sm2.incentive);
	scanf("%d",&sm2.target);
	printf("id=%d name=%s salary=%lf target=%d",sm2.id,sm2.name,sm2.salary,sm2.incentive,sm2.target);
}