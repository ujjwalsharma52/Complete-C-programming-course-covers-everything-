<<<<<<< HEAD
//floyds revrse triangle print
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
  int a=1;
 for(int i=1 ;i<=n; i++){
  for(int j=1 ;j<=n+1-i ;j++){
    printf("%d ",a);
    a++;
  }
  printf("\n");

 }
 return 0;
}
=======
//write a program to print a six digits number in reverse order without using if else statement
#include <stdio.h>

int main() {
    int n, reversed = 0;
    printf("Enter a 6-digit number: ");
    scanf("%d", &n);

    // Reverse the number
    reversed = (n % 10) * 100000 + ((n / 10) % 10) * 10000 + ((n / 100) % 10) * 1000 + ((n / 1000) % 10) * 100 + ((n / 10000) % 10) * 10 + ((n / 100000) % 10);

    printf("Reversed number = %d\n", reversed);
    return 0;
}

>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
