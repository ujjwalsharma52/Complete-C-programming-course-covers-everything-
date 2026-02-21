<<<<<<< HEAD
// star multply patter print
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    //int midr=n/2 +1;
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==j ||j==n+1-i)
        printf("* ");
        else
        printf("  ");
        }
        printf("\n");
    }
=======
// write a program to print 1 +(1/n)powered n
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 1.0;  // Start with the first term of the series
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(1.0 / i, i);
    }
    printf("The sum of the series is: %.2f\n", sum);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}