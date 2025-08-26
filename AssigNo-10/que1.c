//String built in function
//1. Use around 15 built-in functions of string in program
#include<stdio.h>
#include<string.h>
void main()
{
	//strcpy 1
	char n1[10];
	char n2[10]="hello";
	strcpy(n1,n2);
	printf("%s",strcpy(n1,n2));
	
	//strncpy 2
	char n1[10];
	char n2[10]="hello";
	strncpy(n1,n2,3);
	printf("%s",strncpy(n1,n2,3));
	
	//strcat 3  *
 	char n1[5]="good ";
	char n2[6]="hello";
	strcat(n1, n2);
	printf("%s",strcat(n1, n2));

	//strncat 4
	char n1[10]="good";
	char n2[10]="hello";
	strncat(n1,n2,3);
	printf("%s",strncat(n1,n2,3));
	
	//strlen 5
    char n1[10]="good";
	printf("%d",strlen(n1));
	
	//strcmp 6
	char n1[10]="good";
	char n2[10]="good";
	strcmp(n1,n2);
	printf("%d",strcmp(n1,n2));

	//strncmp 7
	char n1[10]="good";
	char n2[10]="goo";
	strncmp(n1,n2,3);
	printf("%d",strncmp(n1,n2,3));

	//strchr 8
	char str[10]="good";
	printf("%s",strchr(str,'o'));
	
	//strrchr 9
	char str[10]="good";
	printf("%s",strrchr(str,'o'));
	
	//strstr 10
	char str[10]="hello good";
	char sub[10]="hello";
	printf("%s",strstr(str,sub));
	
	//strtok 11	
	char str[10]="A_B_C";
	char delim[10]="_";
	printf("%s",strstr(str,delim));
	
	//memcpy 12
	char dest[10]="ahkqwhekj";
	char str[10]="biwjedj";
	printf("%s",memcpy(dest,str,0));

	//memmove 13
	char dest[10]="a+2";
	char str[10]="a";
	printf("%s",memcpy(dest,str,4));
	
	//memcmp 14
	char s1[10]="a";
	char s2[10]="b";
	printf("%s",memcpy(s1,s2,4));

	//strerror 15
	char errno[10]="abcvjhjh";
	strerror(errno);
	printf("%s",strerror(2));
}