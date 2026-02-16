// write a program to find give three digits number is armstrong or not
#include <stdio.h>
int main() {
    int num, originaln, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    originaln = num;
    
    while (originaln!= 0) {
        remainder = originaln % 10; // Get the last digit
        result += remainder * remainder * remainder; // Cube the digit and add to result
        originaln /= 10; // Remove the last digit
    }
    
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}