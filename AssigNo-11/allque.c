//Strings user define function
//1. Write a user define functions for ::
//a. mystrcpy
//b. mystrlen
//c. mystrcmp 
//d. mystrcat 
//e. mystrncpy
//f. mystrupper
//g. mystrlower 
//h. mystrrev
//i. mystrstr
//j. mystrcasecmp
//k. mystrchr
//l. mystrrchr
//m. mystrncmp
//n. mystrnstr
//o. mystrncat
//p. mystrncasecmp
#include <stdio.h>
#include <stdlib.h>
char* mystrcpy(char* , const char* );
int mystrlen(const char* );
int mystrcmp(const char* , const char* );
char* mystrcat(char* , const char* );
char* mystrncpy(char* , const char* , int );
char* mystrupper(char* );
char* mystrlower(char* );
char* mystrrev(char* );
char* mystrstr(const char* , const char* ) ;
int mystrcasecmp(const char* , const char* );
char* mystrchr(const char* , int );
char* mystrrchr(const char* , int );
int mystrncmp(const char* , const char* , int ) ;
char* mystrnstr(const char* , const char* , int );
char* mystrncat(char* , const char* , int );
int mystrncasecmp(const char* , const char* , int );
int main() 
{
    char str1[200], str2[200], result[200];
    int choice, n;

    while (1) 
	{
        printf("\n String Function Menu \n");
        printf("1. mystrcpy\n2. mystrlen\n3. mystrcmp\n4. mystrcat\n5. mystrncpy\n");
        printf("6. mystrupper\n7. mystrlower\n8. mystrrev\n9. mystrstr\n10. mystrcasecmp\n");
        printf("11. mystrchr\n12. mystrrchr\n13. mystrncmp\n14. mystrnstr\n15. mystrncat\n16. mystrncasecmp\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 0) break;

        switch (choice) {
            case 1:
                printf("Enter source string: ");
                gets(str2);
                mystrcpy(result, str2);
                printf("Copied string: %s\n", result);
                break;

            case 2:
                printf("Enter string: ");
                gets(str1);
                printf("Length: %d\n", mystrlen(str1));
                break;

            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Compare result: %d\n", mystrcmp(str1, str2));
                break;

            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                mystrcat(str1, str2);
                printf("Concatenated: %s\n", str1);
                break;

            case 5:
                printf("Enter source string: ");
                gets(str2);
                printf("Enter n: ");
                scanf("%d", &n);
                mystrncpy(result, str2, n);
                printf("Copied: %s\n", result);
                break;

            case 6:
                printf("Enter string: ");
                gets(str1);
                printf("Upper: %s\n", mystrupper(str1));
                break;

            case 7:
                printf("Enter string: ");
                gets(str1);
                printf("Lower: %s\n", mystrlower(str1));
                break;

            case 8:
                printf("Enter string: ");
                gets(str1);
                printf("Reverse: %s\n", mystrrev(str1));
                break;

            case 9:
                printf("Enter main string: ");
                gets(str1);
                printf("Enter substring: ");
                gets(str2);
                printf("Found at: %s\n", mystrstr(str1, str2));
                break;

            case 10:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Case-insensitive compare: %d\n", mystrcasecmp(str1, str2));
                break;

            case 11:
                printf("Enter string: ");
                gets(str1);
                printf("Enter character: ");
                char ch;
                scanf("%c", &ch);
                printf("First occurrence: %s\n", mystrchr(str1, ch));
                break;

            case 12:
                printf("Enter string: ");
                gets(str1);
                printf("Enter character: ");
                scanf("%c", &ch);
                printf("Last occurrence: %s\n", mystrrchr(str1, ch));
                break;

            case 13:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Compare result: %d\n", mystrncmp(str1, str2, n));
                break;

            case 14:
                printf("Enter main string: ");
                gets(str1);
                printf("Enter substring: ");
                gets(str2);
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Found at: %s\n", mystrnstr(str1, str2, n));
                break;

            case 15:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Enter n: ");
                scanf("%d", &n);
                mystrncat(str1, str2, n);
                printf("Concatenated: %s\n", str1);
                break;

            case 16:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Enter n: ");
                scanf("%d", &n);
                printf("Case-insensitive compare: %d\n", mystrncasecmp(str1, str2, n));
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

}


// 1. mystrcpy
char* mystrcpy(char* dest, const char* src) 
{
    int i = 0;
    while (src[i] != '\0') 
	{
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// 2. mystrlen
int mystrlen(const char* str) 
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

// 3. mystrcmp
int mystrcmp(const char* str1, const char* str2) 
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
	 {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return str1[i] - str2[i];
}

// 4. mystrcat
char* mystrcat(char* dest, const char* src) 
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
	 {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

// 5. mystrncpy
char* mystrncpy(char* dest, const char* src, int n)
 {
    int i = 0;
    while (i < n && src[i] != '\0') 
	{
        dest[i] = src[i];
        i++;
    }
    while (i < n) 
	{
        dest[i] = '\0';
        i++;
    }
    return dest;
}

// 6. mystrupper
char* mystrupper(char* str)
 {
    int i = 0;
    while (str[i] != '\0')
	 {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}

// 7. mystrlower
char* mystrlower(char* str) 
{
    int i = 0;
    while (str[i] != '\0') 
	{
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}

// 8. mystrrev
char* mystrrev(char* str)
 {
    int i = 0, j = mystrlen(str) - 1;
    char temp;
    while (i < j) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

// 9. mystrstr
char* mystrstr(const char* haystack, const char* needle) 
{
    int i, j, k;
    if (*needle == '\0')
        return (char*)haystack;
    for (i = 0; haystack[i] != '\0'; i++) 
	{
        for (j = 0, k = i; needle[j] != '\0' && haystack[k] == needle[j]; j++, k++);
        if (needle[j] == '\0')
            return (char*)&haystack[i];
    }
    return NULL;
}

// 10. mystrcasecmp
int mystrcasecmp(const char* str1, const char* str2) 
{
    int i = 0;
    char c1, c2;
    while (str1[i] != '\0' && str2[i] != '\0') 
	{
        c1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
        c2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];
        if (c1 != c2)
            return c1 - c2;
        i++;
    }
    return str1[i] - str2[i];
}

// 11. mystrchr
char* mystrchr(const char* str, int c) 
{
    while (*str != '\0')
	{
        if (*str == (char)c)
            return (char*)str;
        str++;
    }
    return NULL;
}

// 12. mystrrchr
char* mystrrchr(const char* str, int c) 
{
    char* result = NULL;
    while (*str != '\0') 
	{
        if (*str == (char)c)
            result = (char*)str;
        str++;
    }
    return result;
}

// 13. mystrncmp
int mystrncmp(const char* str1, const char* str2, int n) 
{
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0')
	{
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    if (i == n) return 0;
    return str1[i] - str2[i];
}

// 14. mystrnstr
char* mystrnstr(const char* haystack, const char* needle, int n) 
{
    int i, j, k;
    if (*needle == '\0')
        return (char*)haystack;
    for (i = 0; i < n && haystack[i] != '\0'; i++) 
	{
        for (j = 0, k = i; (j < n) && (needle[j] != '\0') && (haystack[k] == needle[j]); j++, k++);
        if (needle[j] == '\0')
            return (char*)&haystack[i];
    }
    return NULL;
}

// 15. mystrncat
char* mystrncat(char* dest, const char* src, int n) 
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while (j < n && src[j] != '\0') 
	{
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

// 16. mystrncasecmp
int mystrncasecmp(const char* str1, const char* str2, int n)
 {
    int i = 0;
    char c1, c2;
    while (i < n && str1[i] != '\0' && str2[i] != '\0') 
	{
        c1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
        c2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];
        if (c1 != c2)
            return c1 - c2;
        i++;
    }
    if (i == n) return 0;
    return str1[i]-str2[i];
}