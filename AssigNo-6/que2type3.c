#include<stdio.h>
void evenodd(int );
void leap(int);
void vowel(char );
void vote(int );
void upperlower(char );
void main()
{	
	int a=3;
	evenodd(a);
	//
	leap(a);
	//
	
	char ch='z';
	vowel(ch);
	//
	
	int age=80;
	vote(age);
	//
	char chr='B';
	upperlower(chr); 
}
void evenodd(int a)
{
	if(a%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
	printf("\n");
}

void leap(int a)
{
	
	if(a%4==0)
	{
		printf("The given number is leap year");
	}
	else
	{
		printf("The given number is not leap year");
	}
		printf("\n");
}

void vowel(char ch)
{
	
	if( (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') ||(ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	{
		printf("The given character is vowel");
	}
	else
	{
		printf("The given character is consonant");
	}
		printf("\n");
}

void vote(int age)
{
	
	if(age>=18)
	{
		printf("The person is eligible to vote");
	}
	else
	{
		printf("The person is not eligible to vote");
	}
		printf("\n");
}

void upperlower(char chr)
{
	
	if(chr >= 'A' && chr <= 'Z')
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
		printf("\n");
}