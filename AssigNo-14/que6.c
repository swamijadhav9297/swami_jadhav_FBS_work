//6. Date (date, month, year)
#include<stdio.h>
#include<string.h>
struct student
{
	int date;
	int month;
	int year;
};
void main()
{
	struct student d1,d2;
	
	d1.date=10;
	d1.month=3;
	d1.year=2020;
	printf("date= %d month=%d year=%d",d1.date,d1.month,d1.year);
	
	printf("\n Enter the date 2 values :-");
	scanf("%d",&d2.date);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	
	printf("date= %d month=%d year=%d",d2.date,d2.month,d2.year);
}