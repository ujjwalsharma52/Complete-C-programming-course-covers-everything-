//write a program to covert distance betwween two city in cm ,meters,inches,feet,while distance is in km
#include <stdio.h>
int main() {
    float km, cm, meter, inche, feet;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    cm = km * 100000;
    meter = km * 1000;
    inche = km * 39370.1;
    feet = km * 3280.84;
    printf("Distance in centimeters: %.2f\n", cm);
    printf("Distance in meters: %.2f\n", meter);
    printf("Distance in inches: %.2f\n", inche);
    printf("Distance in feet: %.2f\n", feet);
    return 0;
}