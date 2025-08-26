//4. Find odd and even among the numbers. 
 
#include<stdio.h>
void main()
{
	int arr[10];
	int i;
	printf("Enter the number:- ");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	for(i=0;i<10;i++)
	{
	
		if(arr[i]%2==0)
		{
			printf("the even number is %d\n",arr[i]);
		}
		else
		{
			printf("the odd numbers is %d\n",arr[i]);
		}
	}
	free(arr);
	return 0;
}