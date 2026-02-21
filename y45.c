<<<<<<< HEAD
// star diamond
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    // upper half
    int nsp =n-1;
    int nst =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nsp--;
        nst+=2;
        printf("\n");
    }// lower half
    int nsk =1;
    int nsl =2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nsk;j++){
            printf("  ");
        }
        for(int j=1;j<=nsl;j++){
            printf("* ");
        }
        nsk++;
        nsl-=2;
        printf("\n");
    
}
=======
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
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf

    return 0;
}