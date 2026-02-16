//write a program to print a six digits number in reverse order without using if else statement
#include <stdio.h>

int main() {
    int n, reversed = 0;
    printf("Enter a 6-digit number: ");
    scanf("%d", &n);

    // Reverse the number
    reversed = (n % 10) * 100000 + ((n / 10) % 10) * 10000 + ((n / 100) % 10) * 1000 + ((n / 1000) % 10) * 100 + ((n / 10000) % 10) * 10 + ((n / 100000) % 10);

    printf("Reversed number = %d\n", reversed);
    return 0;
}

