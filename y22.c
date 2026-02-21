<<<<<<< HEAD
//floyds triangle print
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
  int a=1;
 for(int i=1 ;i<=n; i++){
  for(int j=1 ;j<=i ;j++){
    printf("%d ",a);
    a++;
  }
  printf("\n");

 }
 return 0;
=======
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
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}