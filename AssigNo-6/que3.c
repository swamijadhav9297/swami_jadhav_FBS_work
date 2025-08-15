#include<stdio.h>
void incr();
void num();
void sum();
void prime();
void armstrong();
void perfect();
void fact();
void strong();
void palindrom();
void firstlast();
void main()
{
	incr();
	num();
	sum();
	prime();
	armstrong();
	perfect();
	fact();
	strong();
	palindrom();
	firstlast() ;
}
//start
void incr()
{
	int i=1;
	while(i<10)
	{
		printf("the nmber are 1 to 10 \n");
		i++;
	}
	printf("\n");
}
//end

//start
void num()
{
	int n=5, num=1, ans;
	while(num<=10)
	{
		ans=n*num;
		printf("%d*%d=%d \n",n,num,ans);
		num++;
	
	}
		printf("\n");
}
//end

//start
void sum()
{
	int start=1,end=5;
	int sum=(end-start+1)*(start+end)/2;
	printf("sum=%d \n",sum);
}
//end

//start
void prime()
{
	int n=7,i,start=1;
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
		printf("\n");
}
//end

//start
void armstrong()
{
 int no=131;
 int temp=no;
 int sum=0,rem,rev;
 
 	while(no !=0)
	{
	rem=no%10;
	sum=sum+rev*rev*rev;
	rev=rev*10+rem;
	no=no/10;
	}
	if(temp==rev)
	{
		printf("Armstrong \n");
	}
	else
	{
		printf(" not Armstrong \n");

	}
		printf("\n");
}
//end


//start
void perfect()
{
	int n=28,i,sum=0;
	
	for(i=1;i<n;i++)
	{
		if(n % i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("the number is perfect");
	}
	else
	{
		printf("the number is not perfect");

	}
		printf("\n");
}
//end

//start
void fact()
{
	int n=5;
	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact of %d = %lld \n",n,fact );
}
//end

//start	
	int factorial(int num){
	
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
  }
  
  
  void strong()
  {
  	int n=145;
  	int temp=n;
  	int digit,sum=0;
  	while(temp>0)
  	{
  	digit=temp%10;
	  sum=sum+factorial(digit);
	  temp=temp/10;	
	}
	if(sum==n)
	{
		printf("strong \n");
	}
	else
	{
		printf("Not strong \n");
	}
		printf("\n");
  }
//end  

//start
void palindrom() {
    int n=121, rever=0, rem, original=n;
	while(n != 0) {
        rem = n % 10;
        rever = rever * 10 + rem;
        n /= 10;
    }

    if(original == rever)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}
//end

//start
void firstlast() 
{
    int n=12345, first, last, temp=n;
    last = n % 10;
    while(temp >= 10) {
        temp=temp / 10;
    }
    first = temp;
	printf("Sum of first and last digit = %d\n", first + last);
}
//end