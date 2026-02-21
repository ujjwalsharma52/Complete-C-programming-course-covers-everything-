<<<<<<< HEAD
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1; i<=n ; i++){
        int a=2;
        for(int j=1 ;j<=n+1-i;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;

=======
//write a program to print fibonacci series using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}