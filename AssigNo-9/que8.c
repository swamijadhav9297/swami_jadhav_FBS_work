//8. Merge two arrays
//Create array using function in Assignment 
#include<stdio.h>
void mergearr(int* ,int* ,int* ,int );
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={2,3,1,4,5};
	int crr[10];
	
	mergearr(crr,arr,brr,10);
}
void mergearr(int* crr,int* arr,int* brr,int size)
{
	int i,j;
	for( i=0;i<5;i++)
	{
		crr[i]=arr[i];
	}
	for( j=0;j<5;j++)
	{
		crr[i+j]=brr[j];
	}
	printf("crr array: ");
	
	for( i=0;i<10;i++)
	{
		printf("%d ",crr[i]);
	}
}