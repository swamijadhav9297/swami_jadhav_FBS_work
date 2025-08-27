//10. Sort the array
//Create array using function in Assignment 
#include <stdio.h>
void storearr(int* ,int );
void sortarr(int* ,int );
void display(int* ,int);
int main() 
{
    int no,i,j,temp;
    printf("Enter size of array: ");
    scanf("%d", &no);
	int arr[no];
    printf("Enter %d elements: ",no);
    storearr(arr,no);
    sortarr( arr,no);
    display(arr,no);
}
void storearr(int* arr,int no)
{
for(int i=0;i<no;i++)
	{
        scanf("%d",&arr[i]);
    }
}
void sortarr(int* arr,int no)
{
	int i,j,temp;
	for(i=0;i<no-1;i++) 
	{
        for(j=0;j<no-i-1;j++)
		 {
            if(arr[j]>arr[j+1])
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void display(int* arr,int no)
{
	printf("Sorted array: ");
    for(int i=0;i<no;i++) 
	{
        printf("%d",arr[i]);
    }
}