//6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i=0;
	printf("Enter a string:- ");
	scanf("%s",&str);
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
		str[i]='#';
		
		}
		i++;
	}
		printf("new string is %s \n", str);
}