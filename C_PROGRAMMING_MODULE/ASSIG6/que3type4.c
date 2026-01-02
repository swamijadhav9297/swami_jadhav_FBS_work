#include<stdio.h>
int incr(int );
int nums(int ,int ,int );
int sums(int ,int ,int );
int prime(int ,int ,int );
int armstrong(int ,int ,int ,int ,int );
int perfect(int ,int ,int );
void facts(int ,int ,int );
int strong(int ,int ,double ,int );
int palindrom(int ,int ,int ,int ) ;
void firstlast(int ,int ,int ,int );
void main()
{
	int i=1;
	int nu=incr(i);
	printf("the nmber are 1 to 10  %d\n",nu);
	printf("\n");
	//
	int n=5, num=1, ans,x;
	nums(n,num,ans);
	
	//
	int start=1,end=5, sum=0,z;
	z=sums(start,end,sum);
	printf("sum=%d \n",z);
	
	//
	int pn=7,pstart=1;
	int y=prime(pn,i,pstart);
	if(y==1)
	{
		printf("prime \n");
	}
	else
	{
		printf("not prime \n");
	}
	printf("\n");
	//
	int no=131;
    int temp=no;
    int rem,rev,u;
	u=armstrong(no,temp,sum,rem,rev);
	if(u==1)
	{
		printf("Armstrong \n");
	}
	else
	{
		printf(" not Armstrong \n");

	}
		printf("\n");
	//
	int ns=28,s;
	s=perfect(ns,i,sum);
	if(s==1)
	{
		printf("the number is perfect");
	}
	else
	{
		printf("the number is not perfect");

	}
		printf("\n");
	//
	
	//int n=5;
	//int i;
	int fact=1;
	facts(n,i,fact);
	//
	
	int nk=145;
  	int temps=nk;
  	int digit,k;//sum=0;
	k=strong(nk,temps,digit,sum);
	if(k==1)
	{
		printf("strong \n");
	}
	else
	{
		printf("Not strong \n");
	}
		printf("\n");
	//
	
	int na=121, rever=0, original=na,g;
	g=palindrom(na,rever,rem,original);
	if(g==1)
	 printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
	//
	
	int nw=12345, first, last, tempk=nw;
	firstlast(nw,first,last,tempk) ;
	//
}
//start
int incr(int n)
{
	
	while(n<10)
	{
		n++;
	}
	return n;	
}
//end

//start
int nums(int n,int num,int ans)
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
int sums(int start,int end,int sum)
{
	
	sum=(end-start+1)*(start+end)/2;
	return sum;
}
//end

//start
int prime(int pn,int i,int pstart)
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
		return 1;
	}
	else
	{
		return 0;
	}
	
}
//end

//start
int armstrong(int no,int temp,int sum,int rem,int rev)
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
		return 1;
	}
	else
	{
		return 0;
	}
	
}
//end


//start
int perfect(int ns,int i,int sum)
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
		return 1;
	}
	else
	{
		return 0;
	}
	
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
  
  
int strong(int nk,int temps,double digit,int sum)
  {
  	
  	while(temps>0)
  	{
  	digit=temps%10;
	  sum=sum+factorial(digit);
	  temps=temps/10;	
	}
	if(sum==nk)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
  }
//end  

//start
int palindrom(int na,int rever,int rem,int original) {
    
	while(na != 0) {
        rem = na % 10;
        rever = rever * 10 + rem;
        na /= 10;
    }

    if(original == rever)
    {
		return 1;
	}
	else
	{
		return 0;
	}
       
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