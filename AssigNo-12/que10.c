//10. Write a program to check the string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char arr[10];
	int i,len,flag=0;
	printf("Enter the first string:- ");
	scanf("%s",&arr);
	len=strlen(arr);
	for(i=0;i<len/2;i++)
	{
		if(arr[i]!=arr[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("The string is a palidrom \n");
	}
	else
	{
		printf("The string is not a palidrom \n");	
	}
}