<<<<<<< HEAD
//star + patern print
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int midr=n/2 +1;
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==midr ||j==midr)
        printf("* ");
        else
        printf("  ");
        }
        printf("\n");
    }
    return 0;
=======
//write a program to print 1+1/2+1/3+1/4+...+1/n
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("The sum of the series  is: %.2f\n",sum);
  return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}