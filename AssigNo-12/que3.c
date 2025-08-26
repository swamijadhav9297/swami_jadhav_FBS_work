//3. WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
void main()
{
	char str[9]="firstbit";
	int n=4;
	int i;
	for(i=n;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("%s \n",str);
}