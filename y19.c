// write a prograrm to swap two numbers without using third variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number numbers: ");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}