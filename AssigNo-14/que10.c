//10. Product (id, name, quantity, price)
#include<stdio.h>
struct student
{
	int id;
	char name[20];
	int quantity;
	double price;	
};
void main()
{
	struct student p1,p2;
	
	p1.id=101;
	strcpy(p1.name,"swami");
	p1.quantity=75;
	p1.price=1929;
	printf("id=%d name=%s quantity=%d price=%lf",p1.id,p1.name,p1.quantity,p1.price);
	
	printf("\n Enter the student 2 values");
	scanf("%d",&p2.id);
	scanf("%s",&p2.name);
	scanf("%d",&p2.quantity);
	scanf("%lf",&p2.price);
	printf("id=%d name=%s quantity=%d price=%lf",p2.id,p2.name,p2.quantity,p2.price);}