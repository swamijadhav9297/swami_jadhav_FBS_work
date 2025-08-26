//7. Time (hour, min, sec)
#include<stdio.h>
#include<string.h>
struct student
{
	int hours;
	int min;
	int sec;
};
void main()
{
	struct student t1,t2;
	t1.hours=1;
	t1.min=43;
	t1.sec=55;
	printf("hours=%d min=%d sec=%d",t1.hours,t1.min,t1.sec);
	
	printf("\n Enter the time 2 values :-");
	scanf("%d",&t2.hours);
	scanf("%d",&t2.min);
	scanf("%d",&t2.sec);
	printf("hours=%d min=%d sec=%d",t2.hours,t2.min,t2.sec);
}