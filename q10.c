#include <stdio.h>
int main()
{
    int i,j,count=0;
    for(i=1;i<=9;i++)
    {
        printf("\n");
        for(j=i;j<=i;j++)
        printf("%d",j++);
        //printf("*");
    }
    return 0;
}