#include <stdio.h>
#include <math.h>
int main(){
  int n, x;
  printf("enter the value of n:");
  scanf("%d", &n);
  printf("enter the value of x:");
  scanf("%d", &x);
  for(int i = 1; i <= n; i++) {
    if(i%x==0){
      printf("%d ", i);
    }
  }
  return 0;
}
