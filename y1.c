#include <stdio.h>
int main(){
    int m;
    printf("enter the row :");
    scanf("%d",&m);
    int n;
    printf("enter no of cols :");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=m ;i++){//rows
    for(int j=1; j<=n ;j++){//colum
        printf("* ");
    }
      printf("\n");
    }
    return 0;
}