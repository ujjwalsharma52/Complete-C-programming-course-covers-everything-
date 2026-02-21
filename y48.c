<<<<<<< HEAD
// pattrn print a bb ccc dddd ,,,,
#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ;j++){
        printf("* ");//i replace j
        }
        printf("\n");
    }
    
return 0;
}
=======
// write a program to complay gross salary of an employee
#include <stdio.h>

int main() {
    float basicSalary, grossSalary, allowances, deductions;

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate allowances and deductions
    allowances = basicSalary * 0.2;  // 20% of basic salary
    deductions = basicSalary * 0.1;   // 10% of basic salary

    // Calculate gross salary
    grossSalary = basicSalary + allowances - deductions;

    // Output gross salary
    printf("Gross salary: %.2f\n", grossSalary);

    return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
