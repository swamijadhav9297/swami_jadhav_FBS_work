//2. Search the given number in array. 

#include <stdio.h>

int main() {
    int arr[50], n, i, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at position %d\n", i+1);
            return 0;   
        }
    }

    printf("Number not found\n");

}