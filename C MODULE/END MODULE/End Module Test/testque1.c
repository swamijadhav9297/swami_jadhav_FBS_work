//1.write a program to print sum of numbers in a given range

#include <stdio.h>
void main() 
{
    int start, end, sum = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
	printf("Enter the end of the range: ");
    scanf("%d", &end);

    if (start > end) 
	{
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) 
	{
        if (isPrime(i)) 
		{
            sum += i;
        }
    }

    printf("Sum of prime numbers from %d to %d is: %d\n", start, end, sum);
    
}

void isPrime(int num)
 {
    if (num <= 1)
	 return ;
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0)
            return ;
    }
}