//3. Find sum of all numbers using function
#include<stdio.h>

void firstarr(int* ,int );
void secondarr(int* ,int );
int* displayarr(int* ,int* ,int* ,int  );
int main() 
{
	int n;
    int arr[50], brr[50], sum[50];
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    
    firstarr(arr,n);
    
    secondarr(brr,n);
    displayarr(sum,arr,brr,n);
	
}

void firstarr(int* arr,int n)
{
printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
}

void secondarr(int* brr,int n)
{
	 printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &brr[i]);
    }
}

int* displayarr(int* sum,int* arr,int* brr,int n)
{
	for (int i = 0; i < n; i++) {
    sum[i] = arr[i] + brr[i];
    }
	printf("Sum of the two arrays:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
}