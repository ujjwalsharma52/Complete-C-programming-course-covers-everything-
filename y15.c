//write a program to calculate gross salary of an employee while base salary is given by user
#include <stdio.h>
int main() {
    float basesalary, grosssalary;
    printf("Enter base salary: ");
    scanf("%f", &basesalary);
    grosssalary = basesalary + (basesalary * 0.2) + (basesalary * 0.1);
    printf("Gross Salary: %.2f\n", grosssalary);
    return 0;
}