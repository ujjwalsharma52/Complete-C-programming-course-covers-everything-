//write a program to find number is prime or not wtihout using loop
#include <stdio.h>

int isPrime(int num, int i) {
    if (num <= 1) return 0;
    if (i > num / 2) return 1;
    if (num % i == 0) return 0;
    return isPrime(num, i + 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num, 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
