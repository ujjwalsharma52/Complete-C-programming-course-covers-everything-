<<<<<<< HEAD
//  revres star triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");

    }
=======
// write the program to calculate the sum of all digits of a given four-digit number without using loops
#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extract each digit and add to sum
    sum += number % 10; // units place
    number /= 10;
    sum += number % 10; // tens place
    number /= 10;
    sum += number % 10; // hundreds place
    number /= 10;
    sum += number % 10; // thousands place

    printf("Sum of the digits: %d\n", sum);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}