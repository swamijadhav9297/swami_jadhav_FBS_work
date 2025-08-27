//5. Print alternate elements in array using function.
  
#include<stdio.h>
void displayarr(int* ,int );
void main()
{
	int arr[5]={2,3,4,5,2};
	displayarr(arr,5);

}

void displayarr(int* arr,int size)
{
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		i++;
	}
	
}