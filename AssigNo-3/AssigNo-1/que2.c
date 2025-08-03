#include <stdio.h>

int main() {
    int num, original, reversed = 0;
	printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("Please enter a 3-digit number.\n");
        return 0;
    }
	original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
	if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);
}