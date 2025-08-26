//Array
//1. Find minimum and maximum number in array. 

#include<stdio.h>
void main()
{
	int arr[5],i;
	printf("Enter the numbers:- ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
	}
	printf("the maximum value is :-%d \n",max);
	
	int min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
	}
	printf("the minimum value is :-%d",min);
}