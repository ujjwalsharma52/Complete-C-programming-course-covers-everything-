//write a program  to calculate addtion ,subraction,multiplication and division of two numbers
#include <stdio.h>
int main(){
  int a, b;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  printf("Addition: %d\n", a + b);
  printf("Subtraction: %d\n", a - b);
  printf("Multiplication: %d\n", a * b);
 // printf("Multiplication: %d\n", a/b);
  
  if (b != 0) {
    printf("Division: %.f\n", (float)a / b);
  } else {
    printf("Division by zero is not allowed.\n");
  }

  return 0;
}




