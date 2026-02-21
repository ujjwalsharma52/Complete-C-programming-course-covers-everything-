<<<<<<< HEAD
// 1 22 333 4444 ..........print
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          printf("%d ",i); //i raplace j
        }
        printf("\n");
    }
    return 0;
=======
// area of trianglecc
#include <stdio.h>
int main(){
  float b;
  float h;
  float area;
  printf("enter the value of b");
  scanf("%d",&b);
  printf("enter the value of h");
  scanf("%d",&h);
  area= 0.5 * b * h;
  printf("Area of triangle is %d",area);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}