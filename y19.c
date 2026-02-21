<<<<<<< HEAD
// odd number squre method 2
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
 for(int i=1 ;i<=n; i++){
  int a=1;
  for(int j=1 ;j<=2*n-1 ;j=j+2 ){// j=j+2 ==j+=2
    printf("%d ",j);
   // a= a+2;
  }
  printf("\n");

 }
 return 0;
=======
// write a prograrm to swap two numbers without using third variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number numbers: ");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}