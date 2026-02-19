#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
   // clrscr();
    printf("\nEnter the value of : n");
    scanf("\n%d",&n);
    printf("\n...........................");
   // i++;
    do {
        printf("\n|\t%d\t| \t%d\t|\t%d\t|",i ,i*i,i*i*i);
        i++;
    }
    while(i<=n);
    printf("\n...........................");
    return 0;

    

}