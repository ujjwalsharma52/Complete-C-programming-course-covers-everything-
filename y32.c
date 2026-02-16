//write a program to print 1+1/2+1/3+1/4+...+1/n
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("The sum of the series  is: %.2f\n",sum);
  return 0;
}