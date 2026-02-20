// star mirror triangle method 2 useing two loop
#include <stdio.h.>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){//outer
        for(int j=1;j<=n-i;j++){// spaces
            printf("  ");
        }
        for(int j=1;j<=i;j++){//stars
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}