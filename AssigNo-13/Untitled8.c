//8. Merge two arrays
//Create array using malloc in Assignment 
#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={2,3,1,4,5};
	int i,j;
	int crr[10];
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	for(i=0;i<5;i++)
	{
		crr[i]=arr[i];
	}
	for(j=0;j<5;j++)
	{
		crr[i+j]=brr[j];
	}
	printf("crr array: ");
	
	for(i=0;i<10;i++)
	{
		printf("%d ",crr[i]);
	}
	free(arr);
	return 0;
}