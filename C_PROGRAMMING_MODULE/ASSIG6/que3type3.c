#include<stdio.h>
void incr(int );
void nums(int ,int ,int );
void sums(int ,int ,int );
void prime(int ,int ,int );
void armstrong(int ,int ,int ,int ,int );
void perfect(int ,int ,int );
void facts(int ,int ,int );
void strong(int ,int ,double ,int );
void palindrom(int ,int ,int ,int ) ;
void firstlast(int ,int ,int ,int );
void main()
{
	int i=1;
	incr(i);
	//
	int n=5, num=1, ans;
	nums(n,num,ans);
	//
	int start=1,end=5, sum=0;
	sums(start,end,sum);
	//
	int pn=7,pstart=1;
	prime(pn,i,pstart);
	//
	int no=131;
    int temp=no;
    int rem,rev;
	armstrong(no,temp,sum,rem,rev);
	//
	int ns=28;
	perfect(ns,i,sum);
	//
	
	//int n=5;
	//int i;
	int fact=1;
	facts(n,i,fact);
	//
	
	int nk=145;
  	int temps=nk;
  	int digit;//sum=0;
	strong(nk,temps,digit,sum);
	//
	
	int na=121, rever=0, original=na;
	palindrom(na,rever,rem,original);
	//
	
	int nw=12345, first, last, tempk=nw;
	firstlast(nw,first,last,tempk) ;
	//
}
//start
void incr(int i)
{
	
	while(i<10)
	{
		printf("the nmber are 1 to 10 \n");
		i++;
	}
	printf("\n");
}
//end

//start
void nums(int n,int num,int ans)
{
	
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
void sums(int start,int end,int sum)
{
	
	sum=(end-start+1)*(start+end)/2;
	printf("sum=%d \n",sum);
}
//end

//start
void prime(int pn,int i,int pstart)
{
	
	if(pn<=1)
	{
		pstart=0;
	}
	else
	{
		for(i=2;i*i<=pn;i++)
		{
			if(pn%i==0)
			{
				pstart=0;
				break;
			}
		}
	}
	if(pstart)
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
void armstrong(int no,int temp,int sum,int rem,int rev)
{
 
 
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
void perfect(int ns,int i,int sum)
{
	
	for(i=1;i<ns;i++)
	{
		if(ns % i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==ns)
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
void facts(int n,int i,int fact)
{
	
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
  
  
  void strong(int nk,int temps,double digit,int sum)
  {
  	
  	while(temps>0)
  	{
  	digit=temps%10;
	  sum=sum+factorial(digit);
	  temps=temps/10;	
	}
	if(sum==nk)
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
void palindrom(int na,int rever,int rem,int original) {
    
	while(na != 0) {
        rem = na % 10;
        rever = rever * 10 + rem;
        na /= 10;
    }

    if(original == rever)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}
//end

//start
void firstlast(int nw,int first,int last,int tempk) 
{
    
    last = nw % 10;
    while(tempk >= 10) {
        tempk=tempk / 10;
    }
    first = tempk;
	printf("Sum of first and last digit = %d\n", first + last);
}
//end