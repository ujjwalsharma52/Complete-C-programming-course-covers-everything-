//star + patern print
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int midr=n/2 +1;
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==midr ||j==midr)
        printf("* ");
        else
        printf("  ");
        }
        printf("\n");
    }
    return 0;
}