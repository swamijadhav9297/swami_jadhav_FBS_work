#include <stdio.h>
int main() {
    int n=12345, first, last, temp=n;
    
    last = n % 10;
    while(temp >= 10) {
        temp=temp / 10;
    }
    first = temp;
	printf("Sum of first and last digit = %d\n", first + last);
}