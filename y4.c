// wrong but run hoga  print alphabet squre
#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d" ,&n);
    for(int i=65;i<=n;i++){
        for(int j=65;j<=n;j++){
        printf("%c ",j);
        }
        printf("\n");
    }
    
return 0;
}