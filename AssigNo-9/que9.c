//9. Reverse the given array.
//Create array using function in Assignment 
#include <stdio.h>
void storearr(int* ,int );
void reversarr(int* ,int );
int main() {
    int no, i;
    printf("Enter size of array: ");
    scanf("%d",&no);
    printf("Enter %d elements: ",no);
	int arr[no];
    storearr(arr,no);
	reversarr(arr,no);
   
}
void storearr(int* arr,int size)
{
    
    for(int i=0;i<size;i++) 
	{
        scanf("%d", &arr[i]);
    }
}
void reversarr(int* arr,int size)
{
	printf("Reversed array: ");
    for(int i=size-1;i>=0;i--) 
	{
        printf("%d",arr[i]);
    }
}