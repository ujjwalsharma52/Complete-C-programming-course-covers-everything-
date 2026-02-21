<<<<<<< HEAD
// star mirror triangle method 1 but not perfact
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>n+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
    }
=======
// print revesed the 1to n natural numbner
#include <stdio.h>
int main(){
int n;
printf("enter thr value of n :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  printf("%d ",n-i+1);
}
return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
