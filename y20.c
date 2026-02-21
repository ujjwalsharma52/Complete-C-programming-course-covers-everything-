<<<<<<< HEAD
// odd number triangle
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
 for(int i=1 ;i<=n; i++){
  int a=1;
  for(int j=1 ;j<=i ;j++){
    printf("%d ",a);
    a= a+2;
  }
  printf("\n");

 }
 return 0;
=======
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
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}