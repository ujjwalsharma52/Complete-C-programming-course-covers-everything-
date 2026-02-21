<<<<<<< HEAD
// star mirror triangle method 2 useing two loop
#include <stdio.h.>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){//outer
        for(int j=1;j<=n-i;j++){// spaces
            printf("  ");
        }
        for(int j=1;j<=i;j++){//stars
            printf("* ");
        }
        printf("\n");
    }
=======
//write a program to print  x+x/nfactorial powered n
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float x, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        float factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j; // Calculate factorial
        }
        sum += x / factorial; // Add x/n! to the sum
    }
    printf("The sum of the series is: %.2f\n", sum);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}