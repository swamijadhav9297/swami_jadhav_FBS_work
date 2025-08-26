//3. Find sum of all numbers. 
//Create array using malloc in Assignment 
#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];
	
	int* res=(int*)malloc(sizeof(int)*5);
	if(res==NULL)
	{
		printf("memory not allocated");
		return 0;
	}
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of the two arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

 	free(n);
	return 0;
}
