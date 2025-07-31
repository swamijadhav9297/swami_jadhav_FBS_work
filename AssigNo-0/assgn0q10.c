#include <stdio.h>

int main() 
{
	int i;
    float marks[5], total = 0, percentage;
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;
	printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

}
