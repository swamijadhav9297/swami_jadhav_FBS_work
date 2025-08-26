//9. Reverse the given array.
//Create array using malloc in Assignment 
#include <stdio.h>

int main() {
    int no, i;
    printf("Enter size of array: ");
    scanf("%d",&no);
    int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
	int arr[no];
    printf("Enter %d elements: ",no);
    for(i=0;i<no;i++) 
	{
        scanf("%d", &arr[i]);
    }
	printf("Reversed array: ");
    for(i=no-1;i>=0;i--) 
	{
        printf("%d",arr[i]);
    }
    free(arr);
	return 0;
}