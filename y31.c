//write a program to find the sum of all odd numbers from 1 to n
#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    printf("The sum of all odd numbers from 1 to n is: %d\n", sum);
    return 0;
}