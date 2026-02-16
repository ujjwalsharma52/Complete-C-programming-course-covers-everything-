//write the program to cheack given number four digits number is palindrome or not
#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder, originalNum;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}