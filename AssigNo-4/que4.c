#include<stdio.h>
 void main()
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
		printf("not strong \n");
	}
  }

}