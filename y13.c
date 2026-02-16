// write the program to calculate the sum of all digits of a given four-digit number without using loops
#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extract each digit and add to sum
    sum += number % 10; // units place
    number /= 10;
    sum += number % 10; // tens place
    number /= 10;
    sum += number % 10; // hundreds place
    number /= 10;
    sum += number % 10; // thousands place

    printf("Sum of the digits: %d\n", sum);
    return 0;
}