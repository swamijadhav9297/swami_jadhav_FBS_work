//4. WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include<stdio.h>
void main()
{
	char str[100];
	int temp,le;
	printf("Enter the new string :-");
	scanf("%s",&str);
	int len=strlen(str);
	if(len>1)
	{
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("the first charecter and last charecter is exchanged %s",str);
}