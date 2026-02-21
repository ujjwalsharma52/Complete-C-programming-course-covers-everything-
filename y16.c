<<<<<<< HEAD
// 55555 4444 333 22 1   patern print
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%d " ,i);
        }
        printf("\n");

    }
=======
// write a program to find volume of sphere
#include <stdio.h>
int main() {
    float r, volume;
    const float PI = 3.14159; // Define the value of PI
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    volume = (4.0 / 3.0) * PI * r * r * r; // Volume formula
    printf("Volume of the sphere: %.2f\n", volume);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}