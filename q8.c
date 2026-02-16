//write a program to exutute number is palindrone or not
#include <stdio.h>
int main() {
    int n, reversedn = 0, remainder, originaln;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originaln = n;
    while (n != 0) {
        remainder = n% 10;
        reversedn = reversedn * 10 + remainder;
        n /= 10;
    }
    if (originaln == reversedn)
        printf("%d is a palindrome.\n", originaln);
    else
        printf("%d is not a palindrome.\n", originaln);
    return 0;
}