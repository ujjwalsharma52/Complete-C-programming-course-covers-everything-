<<<<<<< HEAD
// star pyriamidal 
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int nsp =n-1;
    int nst =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nsp--;
        nst+=2;
        printf("\n");
    }
    return 0;
}
=======
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
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
