// write a program tp print the sum of x+x^2+x^3+...+x^n
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}