//7. Take two array and add sum in third array
//Examplearr[5]= {1,2, 3, 4,5}
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
//Create array using malloc in Assignment 
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	int i;
	printf("enter the arr values:- ");
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
	printf("enter the brr values:- ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("The sum in third array is :- ");
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf(" %d,", crr[i]);	
	}
	free(arr);
	return 0;
}