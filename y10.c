// area of trianglecc
#include <stdio.h>
int main(){
  float b;
  float h;
  float area;
  printf("enter the value of b");
  scanf("%d",&b);
  printf("enter the value of h");
  scanf("%d",&h);
  area= 0.5 * b * h;
  printf("Area of triangle is %d",area);
}