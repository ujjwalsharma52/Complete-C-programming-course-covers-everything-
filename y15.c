<<<<<<< HEAD
//  revres alphanbet triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%c " ,j+64);
        }
        printf("\n");

    }
=======
//write a program to calculate gross salary of an employee while base salary is given by user
#include <stdio.h>
int main() {
    float basesalary, grosssalary;
    printf("Enter base salary: ");
    scanf("%f", &basesalary);
    grosssalary = basesalary + (basesalary * 0.2) + (basesalary * 0.1);
    printf("Gross Salary: %.2f\n", grosssalary);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}