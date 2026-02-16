//write a program to print x-x/n factorial powered n +x/n factorial powered n
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
        float factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j; // Calculate factorial
        }
        sum += x *n/ factorial; // Add x/n! to the sum
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}