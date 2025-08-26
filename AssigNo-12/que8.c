//8. WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
void main()
{
	char arr[10];
	int i,res;
	printf("Enter the string:- ");
	scanf("%s",&arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]==' ' ||arr[i]=='\n' ||arr[i]=='\t')
		{
			res++;
		}
	}
	printf("the calculated the number of words present in a string is %d",res);
}