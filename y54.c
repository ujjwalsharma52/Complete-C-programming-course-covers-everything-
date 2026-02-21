//write a program to print prime numbers from 1 to n using while loop
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && i > 1) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
