<<<<<<< HEAD
// hashes under star rectangle 
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
            printf("# ");
        }
        printf("\n");
    }
    return 0;
    }
=======
// write a program tp print the sum of x+x^2+x^3+...+x^n
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
        sum += pow(x, i);
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
