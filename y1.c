#include <stdio.h>
int main(){
<<<<<<< HEAD
    int m;
    printf("enter the row :");
    scanf("%d",&m);
    int n;
    printf("enter no of cols :");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=m ;i++){//rows
    for(int j=1; j<=n ;j++){//colum
        printf("* ");
    }
      printf("\n");
    }
    return 0;
=======
  int B,Y,x,d,z,y;
printf("enter the value of B:");
scanf("%d",&B);
printf("enter the value of Y:");
scanf("%d",&Y);
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of d:");
scanf("%d",&d);
printf("enter the value of z:");
scanf("%d",&z);
printf("enter the value of y:");
scanf("%d",&y);
float result =(( (2*B * Y)/(d+1)) - ((x )/(3*(z + y))));
printf("The result is: %f\n", result);
return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}