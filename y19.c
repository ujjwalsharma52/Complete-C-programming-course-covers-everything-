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
}