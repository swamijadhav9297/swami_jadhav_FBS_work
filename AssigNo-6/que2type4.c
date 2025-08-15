#include<stdio.h>
int evenodd(int );
int leap(int );
char vowel(char );
int vote(int );
char upperlower(char );
void main()
{
	//1
	int a=2, res;
    res=evenodd(a);
	if(res==1)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
	printf("\n");
	
	//2
	int b=4, le;
	le=leap(b);
	if(le==1)
	{
		printf("The given number is leap year");
	}
	else
	{
		printf("The given number is not leap year");
	}
		printf("\n");
	
	//3
	
	char ch='e',vo;
	vo=vowel(ch);
	if(vo==1)
	{
		printf("The given character is vowel");
	}
	else
	{
		printf("The given character is consonant");
	}
		printf("\n");
	//4
	int age=80,v;
	v=vote(age);
	if(v==1)
	{
		printf("The person is eligible to vote");
	}
	else
	{
		printf("The person is not eligible to vote");
	}
		printf("\n");
	//5
	
	char c='B',lu;
	lu=upperlower(c);
	if(lu==1)
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
		printf("\n"); 
}
int evenodd(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int leap(int a)
{
	
	if(a%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char vowel(char ch)
{
	if( (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') ||(ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int vote(int age)
{
	
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char upperlower(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}