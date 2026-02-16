//write a program to find maxminm of two naumber
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number integers: ");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    if (a > b)
        printf("%d is the maximum number.\n", a);
    else
        printf("%d is the maximum number.\n", b);
    return 0;
}