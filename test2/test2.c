//1. WAP to calculate electricity bill.
//For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units –50 rs/unit.

#include <stdio.h>
int main() 
{
    int units;
    float bill=0;
	printf("Enter total units consumed: ");
    scanf("%d",&units);
	if (units <= 50) {
        bill =units*30;
    }
    else if (units <= 150) 
	{
        bill =(50 * 30)+ ((units - 50) * 40);
    }
    else 
	{
        bill = (50 * 30) + (100 * 40) + ((units - 150) * 50);
    }
	printf("Electricity Bill = Rs %.2f\n", bill);
}
//Que 2. WAP to check if number is positive, negative or neutral (0)
#include <stdio.h>

int main() 
{
    int num;
	printf("Enter a number: ");
    scanf("%d",&num);
	if (num > 0) 
	{
        printf("%d is Positive\n", num);
    }
    else if (num < 0) 
	{
        printf("%d is Negative\n", num);
    }
    else 
	{
        printf("Number is Neutral (Zero)\n");
    }
}