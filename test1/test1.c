//1. Convert the time entered in hh,min and sec into total seconds.

#include <stdio.h>
int main() 
{
    int hours, min, sec;
    int totalsec;
	printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &min);
    printf("Enter seconds: ");
    scanf("%d", &sec);

    totalsec =(hours * 3600)+(min * 60) + sec;

    printf("Total seconds = %d\n", totalsec);
}



//2. WAP to check if the year is leap or not.
#include <stdio.h>

int main() 
{
    int year;
	printf("Enter a year: ");
    scanf("%d",&year);
	if(year%4==0) 
	{
        printf("%d is a Leap Year\n", year);
    } 
	else 
	{
        printf("%d is NOT a Leap Year\n", year);
    }
}
//3. Print last 2 digit of number.
#include <stdio.h>
int main() 
{
    long long num; 
    int lasttwo;

    printf("Enter a number: ");
    scanf("%lld", &num);
	lasttwo = num % 100;

    printf("Last 2 digits = %02d\n", lasttwo);

}