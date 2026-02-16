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
    return 0;
}