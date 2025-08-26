//String
//1. Write a program to scan string from user then scan a single character and search it in a accepted string.

#include<stdio.h>
#include<string.h>
int search(char* ,char );
void main()
{
	char str[20];
	char c;
	printf("Enter the string :- ");
	scanf("%s",&str);
	printf("Enter a single character to search :- ");
	scanf(" %c",&c);
	int p = search(str,c);
	if(p == -1)
	{
		printf("character is no found");
	}
	else
	{
		printf("%c found at index %d",c,p);
	}
}
int search(char* str,char c)
{
	int i=0;
	while(str[i] != '\0')
	{
		if(str[i]==c)
			return i;
		i++;
	}
	return -1;
}
