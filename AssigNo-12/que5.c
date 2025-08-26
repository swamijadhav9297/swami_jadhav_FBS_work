//5. WAP to Count the Number of Vowels in a String

#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	printf("Enter a string:- ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		
		}
	}
		printf("the %d in a vowels in a string ",count);
}