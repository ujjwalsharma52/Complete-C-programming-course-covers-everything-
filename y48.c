// pattrn print a bb ccc dddd ,,,,
#include <stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i ;j++){
        printf("* ");//i replace j
        }
        printf("\n");
    }
    
return 0;
}