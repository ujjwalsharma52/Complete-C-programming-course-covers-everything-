#include <stdio.h>
int main(){
  int B,Y,x,d,z,y;
printf("enter the value of B:");
scanf("%d",&B);
printf("enter the value of Y:");
scanf("%d",&Y);
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of d:");
scanf("%d",&d);
printf("enter the value of z:");
scanf("%d",&z);
printf("enter the value of y:");
scanf("%d",&y);
float result =(( (2*B * Y)/(d+1)) - ((x )/(3*(z + y))));
printf("The result is: %f\n", result);
return 0;
}