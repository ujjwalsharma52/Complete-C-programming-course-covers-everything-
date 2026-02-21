<<<<<<< HEAD
// dddd ccc bb a pattern print 
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%c " ,i+64);
        }
        printf("\n");

    }
    return 0;
=======
//write a program to find a volume of cone
#include <stdio.h>
int main(){
  int r;
float h,volume;
printf("enter trhe value of r");
scanf("%d",&r);
printf("enter the value of h");
scanf("%f",&h);

volume =3.14*r*r*h*033;
printf("volume of cone %f",volume);
return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}