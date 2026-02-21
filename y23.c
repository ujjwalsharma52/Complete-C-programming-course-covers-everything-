<<<<<<< HEAD
// even squre print
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n ;i++ ){
        int a=2;
        for(int j=1; j<=n ;j=j+2){
            printf("%d ",a);
            a=a+2;
        }
      printf("\n");  
    }
=======
//write a program to print fibonacci series using without recursion
#include <stdio.h>
int main(){
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // first two terms are 0 and 1
        } else {
            next = a + b; // next term is the sum of the previous two
            a = b; // update a to the last term
            b = next; // update b to the current term
        }
        printf("%d ", next);
    }
    printf("\n");
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}