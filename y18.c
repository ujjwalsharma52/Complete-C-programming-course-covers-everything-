<<<<<<< HEAD
// odd number squre method 1 right
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
 for(int i=1 ;i<=n; i++){
  int a=1;
  for(int j=1 ;j<=n ;j++){
    printf("%d ",a);
    a= a+2;
  }
  printf("\n");

 }
 return 0;
=======
// write a program to print a five digits number in reverse order without using if else statement
#include <stdio.h>
int main() {
    int number, reversed = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    reversed += (number % 10) * 10000; // last digit
    number /= 10;
    reversed += (number % 10) * 1000; // fourth digit
    number /= 10;
    reversed += (number % 10) * 100; // third digit
    number /= 10;
    reversed += (number % 10) * 10; // second digit
    number /= 10;
    reversed += number; // first digit// number= reversed +number

    printf("Reversed Number: %d\n", reversed);
    return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}