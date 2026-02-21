<<<<<<< HEAD
// pattrn print a bb ccc dddd ,,,,
#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ;j++){
        printf("%c ",i+64);//i replace j
        }
        printf("\n");
    }
    
return 0;
=======
//write a program of temperature of city f to c
#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", c);
    return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}