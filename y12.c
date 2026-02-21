<<<<<<< HEAD
// revres paterrn printe logic
// if we take n=4 then 
// i=1 ,j=1 to j=4
// i=2 ,j=1 to j=3
//i=3 ,j=1 to j=2
// i=4,j=1 to j=1
// so we see i+j = n+1
//so j=n+1-j
=======
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
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
