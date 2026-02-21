//write a program to find odd even number without using %
#include <stdio.h>

void oddeven(int x) {
    if ((x & 1) == 0) {
        printf("%d is even", x);
    } else {
        printf("%d is odd number", x);
    }
}

int main() {
    int a;
    printf("enter the number :");
    scanf("%d", &a);
    oddeven(a);
    return 0;
}