<<<<<<< HEAD
//star and hashes patern print
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
        printf("# ");
        }
        printf("\n");
    }
=======
//write a program to find the sum of all odd numbers from 1 to n
#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    printf("The sum of all odd numbers from 1 to n is: %d\n", sum);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}