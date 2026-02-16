// write a program to print 1 + 1/2! + 1/3! + ... + 1/n!
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 1.0;  
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        float factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;// factorial =factorial *j
        }
        sum += 1.0 / factorial;
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}