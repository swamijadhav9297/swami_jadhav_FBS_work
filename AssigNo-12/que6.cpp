#include<stdio.h>
void main()
{
	char str[100];
	int i;
	printf("Enter a string:- ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
		str[i]="*";
		
		}
	}
		printf("the %s in a vowels in a string ",str);
}