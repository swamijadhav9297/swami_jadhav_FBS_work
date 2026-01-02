#include<stdio.h>
	
	int factorial(int num){
	
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
  }
  void main()
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
  }