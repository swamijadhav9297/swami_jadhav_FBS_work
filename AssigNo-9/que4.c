//4. Find odd and even among the numbers
 
#include<stdio.h>
void creatarr(int* ,int );
void displayarr(int* ,int );
void main()
{
	int arr[10];
	creatarr(arr,10);
	displayarr(arr,10);
	
}
void creatarr(int* arr,int n)
{
	printf("Enter the number:- ");
	for(int i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
}
void displayarr(int* arr,int n)
{
	for(int i=0;i<10;i++)
	{
	
		if(arr[i]%2==0)
		{
		printf("the even numbers is %d\n",arr[i]);
		}
		else
		{
			printf("the odd numbers is %d\n",arr[i]);
		}
	}
}