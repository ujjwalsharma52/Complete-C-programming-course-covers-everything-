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
}