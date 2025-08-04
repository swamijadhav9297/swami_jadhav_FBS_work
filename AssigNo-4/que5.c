#include<stdio.h>
void main()
{
	printf("enter 1----even or odd\n");
	printf("enter 2----prime\n");
	printf("enter 3----pallinderone or not\n");
	printf("enter 4----positive,negative,zero\n");
	printf("enter 5---reverse\n");
	printf("enter 6----sum of digits\n");
	int choice;
	printf("\n");
	printf("Enter the any number from given numbers \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		int a;
		printf("enter any number \n");
		scanf("%d",&a);
	if(a%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}	
	}
	else if(choice==2)
	{
		int n,i,start=1;
		printf("enter the any number \n");
		scanf("%d",&n);
	if(n<=1)
	{
		start=0;
	}
	else
	{
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				start=0;
				break;
			}
		}
	}
	if(start)
	{
		printf("prime \n");
	}
	else
	{
		printf("not prime \n");
	}
	}
	else if(choice==3)
	{
    int num, reversed = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);

    
	}
	else if(choice==4)
	{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Number is Positive.\n");
    else if(num < 0)
        printf("Number is Negative.\n");
    else
        printf("Number is Zero.\n");

    return 0;
	
	}
	else if(choice==5)
	{
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number is: %d\n", reversed);	
	}
	else if(choice==6)
	{
	int num1,num2,sum;
	printf("Enter the first number \n")	;
	scanf("%d",&num1);
	printf("Enter the second number \n")	;
	scanf("%d",&num2);
	sum=num1+num2;
	printf("the first is %d and second is %d =sum %d",num1,num2,sum);
	}
}