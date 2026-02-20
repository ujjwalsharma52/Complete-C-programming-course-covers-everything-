// zero one revrse triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n ;i++){
        for( int j=1; j<=n+1-i;j++){
            if((i+j)%2==0)
                printf("%d",1);
                else
                    printf("%d",0);
             }
            printf("\n");
    }
    return 0;
}