//7. Take two array and add sum in third array
//Examplearr[5]= {1,2, 3, 4,5}
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
//Create array  using function in Assignment 
#include<stdio.h>
void storearr(int*,int );
void storebrr(int*,int );
void displaycrr(int*,int*,int*,int );
void main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	int i;
	storearr(arr,5);
	
	storebrr(brr,5);
	
	displaycrr(crr,arr,brr,5);
}
void storearr(int*arr,int size)
{
	printf("enter the arr values:- ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void storebrr(int*brr,int size)
{
		printf("enter the brr values:- ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
}
void displaycrr(int*crr,int* arr,int* brr,int size)
{

printf("The sum in third array is :- ");
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf(" %d,", crr[i]);	
	}
}