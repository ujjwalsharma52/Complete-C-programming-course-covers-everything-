// write a program to find volume of sphere
#include <stdio.h>
int main() {
    float r, volume;
    const float PI = 3.14159; // Define the value of PI
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    volume = (4.0 / 3.0) * PI * r * r * r; // Volume formula
    printf("Volume of the sphere: %.2f\n", volume);
    return 0;
}