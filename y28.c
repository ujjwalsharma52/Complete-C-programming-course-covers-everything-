// write program to print sum of 2 and 3 place of given number five digits
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Extracting the 2nd and 4rd digits from the right
    sum += (n / 10) % 10; // 2nd place (tens)
    sum += (n / 1000) % 10; // 43y29rd place (hundreds)

    printf("Sum of the 2nd and 4rd digits = %d\n", sum);
    return 0;
}