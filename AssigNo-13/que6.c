//6. Accept array and print only prime numbers of array. 
//Create array using malloc in Assignment 
#include<stdio.h>
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	for(i=0;i<10;i++)
	{
	if(arr[i]%2!=0)
	printf("the prime number in array is:- %d \n",arr[i]);	
	}
	free(arr);
	return 0;
}