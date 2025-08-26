//5. Print alternate elements in array.
//Create array using malloc in Assignment  
#include<stdio.h>
void main()
{
	int arr[5]={2,3,4,5,2};
	int i;
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		i++;
	}
	free(arr);
	return 0;
}