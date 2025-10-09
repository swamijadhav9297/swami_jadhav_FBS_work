//1: Write a program to print factors of number in given range.
 //Eg. Range 10 to 15
 
#include <stdio.h>

int main() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
	for (int num=start; num<=end; num++) 
	{
        printf("%d= ",num);
        for (int i = 1; i <= num; i++) 
		{
            if (num % i == 0) {
                printf("%d", i);
                if (i != num) printf(", "); 
            }
        }
        printf("\n");
    }
}
//2: Write a program to find power of any number.
#include <stdio.h>

int main()
{
    int base, exp;
    long long result = 1;
	printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
	for (int i = 1; i <= exp; i++) 
	{
        result=result* base;
    }
	printf("%d^%d = %lld\n", base, exp, result);
}