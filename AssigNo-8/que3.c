//3. Find sum of all numbers. 
#include<stdio.h>
int main() 
{
    int n, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

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

    return 0;
}
