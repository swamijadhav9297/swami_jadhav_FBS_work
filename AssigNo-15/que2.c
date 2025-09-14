//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all these members from user and display them. Also perform 
//addition of two time variables and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert 
//the given time into sec. 


#include<stdio.h>
typedef struct time
{
	int hr;
	int min;
	int sec;
		
}time;

void accepttime(time* ptr);
time addtime(time t1,time t2);
void display(time t);
int timeToSeconds( time t) ;
void main()
{
	time t1,t2,sum,sum1,sum2;
	
	printf("Enter the t1");
	accepttime(&t1);
	
	printf("\nEnter the t2");
	accepttime(&t2);
	
	sum=addtime(t1,t2);
	
	printf("fist time\n");
	display(t1);
	
	printf("second time\n");
	display(t2);
	
	printf("sum of t1 and t2\n");
	display(sum);
	

	printf("\nFirst time in seconds: %d seconds\n", timeToSeconds(t1));

	printf("Second time in seconds: %d seconds\n", timeToSeconds(t2));
	
}
void accepttime(time* ptr)
{
	printf("\nenter the hour:- ");
	scanf("%d",&ptr->hr);
	printf("enter the minn:- ");
	scanf("%d",&ptr->min);
	printf("enter the sec:-");
	scanf("%d",&ptr->sec);
}
time addtime(time t1,time t2)
{
	time result;
	
	result.sec = t1.sec + t2.sec;
	result.min = t1.min + t2.min + result.sec / 60;
	result.sec = result.sec % 60;
	result.hr = t1.hr + t2.hr + result.min / 60;
	result.min = result.min % 60;
	
	return result;
}
void display(time t) 
{
	printf("%d hr %d min %d sec\n", t.hr, t.min, t.sec);
}
int timeToSeconds(time t) 
{   
return t.hr * 3600 + t.min * 60 + t.sec;

}