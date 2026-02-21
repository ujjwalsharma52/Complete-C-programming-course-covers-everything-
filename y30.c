<<<<<<< HEAD
// zero one revrse triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n ;i++){
        for( int j=1; j<=n+1-i;j++){
            if((i+j)%2==0)
                printf("%d",1);
                else
                    printf("%d",0);
             }
            printf("\n");
    }
    return 0;
=======
//write a program to find the sum of all even numbers from 1 to n
#include <stdio.h>
int main(){
  int n;
  int sum = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  for (int i = 2; i <= n; i += 2) {


    sum += i;
  }
  printf("The sum of all even numbers from 1 to n is: %d\n",sum);
  return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}