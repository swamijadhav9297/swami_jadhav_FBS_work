#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter the array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Display the array");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	
//	int search;
//	printf("Enter the number you want to search\n");
//	scanf(" %d", &search);
//	for(int i=0;i<5;i++)
//	{
//	if(arr[i]==search)
//	{
//		printf("the number is found in arr at index %d\n",i);
//		found=1;
//		break;
//	}
//}
//if(!found)
//printf("the number is not found in arr\n");
int no,index=-1;
printf("enter the number you want to search ");
scanf("%d",&no);
for(int i=0;i<5;i++)
{
	if(arr[i]==no)
	{
		index=i;
		break;
	}
}


if(index==-1)
{
printf("not");
}

else
printf("number found at %d index",index);
}