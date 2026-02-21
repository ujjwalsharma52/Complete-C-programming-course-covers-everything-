#include <stdio.h>
int main(){
  int n;
  printf("enter the value of n");
  int i=1;
  while(i<=n){
    if(i%2==1)
    printf("%d ",i);
    i++;
  }
  return 0;
}