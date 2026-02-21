<<<<<<< HEAD
//  revres number triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%d " ,j);
        }
        printf("\n");

    }
=======
// write a program to find simple interest
#include <stdio.h>
int main() {
    float principal, rate, time, Si;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    Si = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", Si);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}