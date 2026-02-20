// tir pattern printe
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    // upper half
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
    }// lower half
    int nsk =1;
    int nsl =2*n-3;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nsk;j++){
            printf("  ");
        }
        for(int j=1;j<=nsl;j++){
            printf("* ");
        }
        //nsp++;
       // nst-=2;
        printf("\n");
    
}

    return 0;
}