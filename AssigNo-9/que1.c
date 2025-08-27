//Array
//1. Find minimum and maximum number in array using function 

#include<stdio.h>
void creatarray(int* ,int );
int* maxarray(int* ,int);
int* minarray(int* ,int);
void main()
{
	int arr[5];
	creatarray(arr,5);
	int res1=maxarray(arr,5);
	printf("the maximum value is :-%d \n",res1);
	int res2=minarray(arr,5);
	printf("the minimum value is :-%d",res2);
}
void creatarray(int* arr,int size)
{
	printf("Enter the numbers:- ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int* maxarray(int* arr,int size)
{
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
	}
	return max;
}
int* minarray(int* arr,int size)
{
int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
	}
	return min;
}