//2. WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
void main()
{
	char str[200];
	int i=0;
	printf("Enter the string :- ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		{
		str[i]='$';
		}
		
	}
	printf("%s",str);
}