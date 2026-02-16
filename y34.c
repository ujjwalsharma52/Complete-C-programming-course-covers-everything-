// write a program to print 1 +(1/n)powered n
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 1.0;  // Start with the first term of the series
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(1.0 / i, i);
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}