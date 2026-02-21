<<<<<<< HEAD
// star rambos  method 2 useing two loop
#include <stdio.h.>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){//outer
        for(int j=1;j<=n-i;j++){// spaces
            printf("  ");
        }
        for(int j=1;j<=n;j++){//stars
            printf("* ");
        }
        printf("\n");
=======
//write a program to print all integers from 100 to 300 which are divisible by 17
#include <stdio.h>
int main() {
    for (int i = 100; i <= 300; i++) {
        if (i % 17 == 0) {
            printf("%d ", i);
        }
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    }
    return 0;
}