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
    return 0;
}