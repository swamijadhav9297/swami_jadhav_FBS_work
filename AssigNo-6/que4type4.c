#include<stdio.h>
int armstrong(int ,int ,int ,int ,int ,int );
int prime(int ,int ,int );
int perfect(int ,int ,int );
int strong(int ,int ,int ,int );
void all(int );
void main()
{
	//
	int no=124;
	int count;
	int temp=no;
	int sum,rem;
	int res=1,s;
   	s=armstrong(no,count,temp,sum,rem,res);
	printf("%d is the armstrong \n",s);
   	//
   	int n=9,i,start=1,d;
   	d=prime(n,i,start);
   	if(d==1)
	{
		printf("prime \n");
	}
	else
	{
		printf("not prime \n");
	}
   	
   	//
   	
   	int ns=28,sums=0;
	int f=perfect(ns,i,sums);
	if(f==1)
	{
		printf("perfect \n");
	}
	else
	{
		printf("not perfect \n");
	}
	//
	
	int nk=145;
  	int tempk=nk;
  	int digit,h;//sum=0;	
	h=strong(nk,tempk,digit,sums);
	if(h==1)
	{
		printf("strong \n");
	}
	else
	{
		printf("not strong \n");
	}
	//
	
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
	all(choice);
	//
}

int armstrong(int no,int count,int temp,int sum,int rem,int res)

{
for(int i=1;i<=10;i++)
{

	
	while(no>0)
	{
		count++;
		no=no/10;
		
	}
	while(no>0)
	{
		res=no%10;
		int res=1;
		for(int i=1;i<=count;i++)
		res=res*rem;
		sum=sum+res;
		no=no/10;
	}
	if(sum==temp)
	{
		return sum;
	}
 }
}


int prime(int n,int i,int start)
{
for(int i=1;i<=1;i++)

{
	
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
		return 1;
	}
	else
	{
		return 0;
	}
}
}



int perfect(int ns,int i,int sums)
{
	for(int i=1;i<=100;i++)
	{

	
	for(i=1;i<ns;i++)
	{
		if(ns % i==0)
		{
			sums=sums+i;
		}
	}
	if(sums==ns)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
	}
}

int strong(int nk,int tempk,int digit,int sums)
 {
 for(int i=1;i<=100;i++)
{
	int factorial(int num){
	int fact=1;
	
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
  }
 
  	
  	while(tempk>0)
  	{
  	digit=tempk%10;
	  sums=sums+factorial(digit);
	  tempk=tempk/10;	
	}
	if(sums==nk)
	{
	
		return 1;
	}
		else
	{
		return 0;	
	}
	

}
}

void all(int choice)
{
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