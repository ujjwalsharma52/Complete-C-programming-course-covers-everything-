<<<<<<< HEAD
// print solid squre
    #include <stdio.h>
    int main(){
    //int m;
   //printf("enter the row :");
   // scanf("%d",&m);
    int n;
    printf("enter the side of squre :");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++){//rows
     for(int j=1; j<=n;j++){
        printf("* ");
    }
      printf("\n");
    }
    return 0;
=======
#include <stdio.h>
int main(){
  int n;
  printf("enter the value of number");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("number is even");
  }
  else
  {
    printf("number is odd");
  }
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}