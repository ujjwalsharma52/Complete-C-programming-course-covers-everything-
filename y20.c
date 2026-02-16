//write a program to swap of two number useing third variable
#include <stdio.h>
int main() {
  int a, b, temp;
  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("Enter the value of b : ");
  scanf("%d", &b);

  temp = a;
  a = b;
  b = temp;

  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}