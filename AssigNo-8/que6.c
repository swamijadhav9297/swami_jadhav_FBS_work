//6. Accept array and print only prime numbers of array. 
 
#include<stdio.h>
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=0;i<10;i++)
	{
	if(arr[i]%2!=0)
	printf("the prime number in array is:- %d \n",arr[i]);	
	}
	
}