#include<stdio.h>
void main()
{
//	int arr[]={8,16,32};
//	int *p=arr;
//	printf("%d",(*p++)+(*p));
	int arr[3]={1,2};
	int *p=arr;
	*p=*p+*(p+1);
	printf("%d",*p);
}