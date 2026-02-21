<<<<<<< HEAD
#include <stdio.h>
=======
// write the progran to reversed the given number of five digits interger number
#include <stdio.h>
int main() {
    int num, reversedNum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
