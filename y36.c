<<<<<<< HEAD
// hole star rectangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    //int m;
    //printf("enter the value of m :");
    //scanf("%d",&n);
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 ||j==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
    }
=======
// write a program to print 1 + 1/2! + 1/3! + ... + 1/n!
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 1.0;  
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        float factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;// factorial =factorial *j
        }
        sum += 1.0 / factorial;
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
