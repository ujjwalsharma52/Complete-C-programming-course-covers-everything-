// write a program to print a five digits number in reverse order without using if else statement
#include <stdio.h>
int main() {
    int number, reversed = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    reversed += (number % 10) * 10000; // last digit
    number /= 10;
    reversed += (number % 10) * 1000; // fourth digit
    number /= 10;
    reversed += (number % 10) * 100; // third digit
    number /= 10;
    reversed += (number % 10) * 10; // second digit
    number /= 10;
    reversed += number; // first digit// number= reversed +number

    printf("Reversed Number: %d\n", reversed);
    return 0;
}