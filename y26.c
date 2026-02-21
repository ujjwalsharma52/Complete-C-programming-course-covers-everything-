<<<<<<< HEAD
//floyds squre print
#include <stdio.h>
int main()
{
  int n;
  printf("enter the value of n :");
  scanf("%d", &n);
  int a=1;
 for(int i=1 ;i<=n; i++){
  for(int j=1 ;j<=n ;j++){
    printf("%d ",a);
    a++;
  }
  printf("\n");

 }
 return 0;
}
=======
//program to print table of n number
#include <stdio.h>
int main(){
    int n;
    printf("\n ENTER THE VALUE OF n");
    scanf("%d",&n);
    for(int i=n; i<=n*10;i=i+n)
    printf("\n %d",i); 
    return 0;
}



>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
