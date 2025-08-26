//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions
#include<stdio.h>
#include<string.h>
void main()
{
	char arr[10];
	char brr[10];
	int i,len1,len2;
	printf("Enter the first string:- ");
	scanf("%s",&arr);
	printf("Enter the second string:- ");
	scanf("%s",&brr);
	len1=strlen(arr);
	len2=strlen(brr);
	if(len1>len2)
	{
		printf("The largest string is :- %s \n",arr);
	}
	else if(len2>len1)
	{
		printf("The largest string is :- %s \n",brr);	
	}
	else
	{
		printf("Both strings are equal in length.\n");		
	}

}