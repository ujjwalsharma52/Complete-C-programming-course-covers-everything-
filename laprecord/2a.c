//wap to relate the two interger using =,<,>
#include <stdio.h>
#include <conio.h>
int main(){
    int a,b;
    printf("\nENTER THE TWO VALUE");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("RESULT :%d=%d",a,b);
        }
      else{
        if(a>b)
        printf("RESULT :%d>%d",a,b);
            }
              else{
                printf("RESULT :%d<%d",a,b);
                }

}