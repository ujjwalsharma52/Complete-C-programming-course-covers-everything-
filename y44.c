<<<<<<< HEAD
// alphabet   pyriamidal 
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
            printf("%c ",j+64);
        }
        nsp--;
        nst+=2;
        printf("\n");
=======
//write a program to print n terms of fibonacci series
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    }
    return 0;
}