#include <stdio.h>
int main() {
    int n=121, rever=0, rem, original=n;
	while(n != 0) {
        rem = n % 10;
        rever = rever * 10 + rem;
        n /= 10;
    }

    if(original == rever)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}