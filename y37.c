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