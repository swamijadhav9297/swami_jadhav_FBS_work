//1. WAP Print even and odd numbers in a given range.
#include <stdio.h>

int main()
 {
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
	printf("Odd numbers: ");
    for (int i = start; i <= end; i++)
	 {
        if (i%2!= 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
	printf("Even numbers: ");
    for (int i=start; i<=end; i++) 
	{
        if (i%2 == 0) 
		{
            printf("%d ",i);
        }
    }
    printf("\n");
}

//2. WAP to add alternate numbers from given range.
#include <stdio.h>

int main() 
{
    int start, end, sum = 0;
	printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
	for (int i=start; i<=end;i+=2)
	{
        sum=sum+i;
    }
	printf("Sum = %d\n", sum);
}