<<<<<<< HEAD
// zero one triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n ;i++){
        for( int j=1; j<=i;j++){
            if((i+j)%2==0)
                printf("%d",1);
                else
                    printf("%d",0);
             }
            printf("\n");
    }
    return 0;
=======
#include <stdio.h>
int main(){
int n;
printf("enter thr value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  printf("%d ",i);
}
return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}