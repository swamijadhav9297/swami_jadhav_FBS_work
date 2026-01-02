//2.write a program to accept string ferom user and replace one charecter from special symbol
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
printf("enter the string :");
gets(str);

for(int i=0;str[i]!='\0';i++)
{
	if(str[i]>'A'&&str[i]<'Z'||str[i]>'a'&&str[i]<'z')
	{
		str[i]='#';
		
	}
}
printf("the modifyed string is  %s \n",str);
}