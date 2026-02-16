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
