// 55555 4444 333 22 1   patern print
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%d " ,i);
        }
        printf("\n");

    }
    return 0;
}