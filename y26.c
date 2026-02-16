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



