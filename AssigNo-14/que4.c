//4. HR (id, name, salary, commission)

#include<stdio.h>
struct student
{
	int id;
	char name[20];
	double salary;
	double comission;	
};
void main()
{
	struct student h1,h2;
	
	h1.id=10109;
	strcpy(h1.name,"swami");
	h1.salary=7509077;
	h1.comission=2838;
	printf("id=%d name=%s salary=%lf comission=%lf",h1.id,h1.name,h1.salary,h1.comission);
	
	printf("\n Enter the admin 2 values");
	scanf("%d",&h2.id);
	scanf("%s",&h2.name);
	scanf("%lf",&h2.salary);
	scanf("%lf",&h2.comission);
	printf("id=%d name=%s salary=%lf comission=%lf",h2.id,h2.name,h2.salary,h2.comission);
}