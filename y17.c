// dddd ccc bb a pattern print 
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){
            printf("%c " ,i+64);
        }
        printf("\n");

    }
    return 0;
}