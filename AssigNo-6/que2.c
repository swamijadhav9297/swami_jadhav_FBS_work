#include<stdio.h>
void evenodd();
void leap();
void vowel();
void vote();
void upperlower();
void main()
{
	evenodd();
	leap();
	vowel();
	vote();
	upperlower(); 
}
void evenodd()
{
	int a=3;
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

void leap()
{
	int a=3;
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

void vowel()
{
	char ch='z';
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

void vote()
{
	int age=80;
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

void upperlower()
{
	char ch='B';
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("The given character is uppercase");
	}
	else
	{
		printf("The given character is lowercase");
	}
		printf("\n");
}