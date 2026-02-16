// write a program to sum of all digits of a enteted five digit number
#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Sum the digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
