#include <stdio.h>
int main(){
  int n, sum=0;
  printf("enter the four digits number ");
  scanf("%d",&n);
  sum += n % 10; // units place// sum=sum+n%10;
  n /= 10;
  sum += n % 10; // tens place
  n /= 10;
  sum += n % 10; // hundreds place
  n /= 10;
  sum += n % 10; // thousands place
  n /= 10;
  printf("Sum of digits = %d\n", sum);
  return 0;
}