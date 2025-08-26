//Array
//1. Find minimum and maximum number in array.
//Create array using malloc in Assignment  

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5],i;
	printf("Enter the numbers:- ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
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
	free(arr);
	return 0;
}