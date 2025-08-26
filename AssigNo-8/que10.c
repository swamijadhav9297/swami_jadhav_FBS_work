//10. Sort the array
//Create array using malloc in Assignment 
#include <stdio.h>

int main() 
{
    int no,i,j,temp;
    printf("Enter size of array: ");
    scanf("%d", &no);
	
    int arr[no];
    printf("Enter %d elements: ",no);
    for(i=0;i<no;i++)
	{
        scanf("%d",&arr[i]);
    }

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

    printf("Sorted array: ");
    for(i=0;i<no;i++) 
	{
        printf("%d",arr[i]);
    }
    
}