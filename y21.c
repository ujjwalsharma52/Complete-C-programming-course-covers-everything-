<<<<<<< HEAD
// revrse odd tringle
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
 for(int i=1 ;i<=n; i++){
  int a=1;
  for(int j=1 ;j<=n+1 -i ;j++){
    printf("%d ",a);
    a= a+2;
  }
  printf("\n");

 }
 return 0;
=======
#include <stdio.h>
int main(){
  int a=123;
printf("value of a %d\n",a);

  int size=sizeof(a);
  printf("size is %d",size);


>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}