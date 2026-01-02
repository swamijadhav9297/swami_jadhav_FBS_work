#include<stdio.h>
void main()
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
}
