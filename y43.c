<<<<<<< HEAD
// number  pyriamidal 
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int nsp =n-1;
    int nst =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
=======
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
    
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}