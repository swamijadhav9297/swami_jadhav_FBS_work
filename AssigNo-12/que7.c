//7. WAP to Remove the Characters of Odd Index Values in a String

#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],result[100];
	int i,j=0;
	printf("Enter a string:- ");
	scanf("%s",&str);
	
//	for(i=0;str[i] != '\0';i++)
//	{
//		if(str[i]%2!=0)
//		{
//		str[i]='\0';
//		
//		}
//	}
	for(i=0;str[i] != '\0';i++)
	{
		if(i%2==0)
		{
		result[j]=str[i];
		j++;
		}
	}
	result[j]='\0';
	printf("the odd index value in a string is %s \n", result);
}