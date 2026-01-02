#include<stdio.h>
void main()
{
	int hours;
	int min=180;
	int sec=25;
	hours=min/60;
	min=min*60+min;
	sec=min *60+sec;
	printf("hours=%d minutes %d seconde= %d",hours,min,sec);
}