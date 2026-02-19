#include <stdio.h>
#include <conio.h>
int main(){
    char ch;
    int lowers=0, uppers=0,numbers=0;
    //clrscr();
    printf("\n  Enter the charter :");
    scanf("%c",&ch);
    do
    {
    if (ch>='A' && ch<='Z')
    uppers++;
    if(ch>='a' && ch<='z')
    lowers++;
    if(ch>='0'&& ch<='9')
    numbers++;
    fflush(stdin);
    printf("\nEnter another character .Enter * to exit.\\");
    scanf("\n%c",&ch);
}while(ch!='*');
printf("Total count of lower case chatracter enterd =%d",lowers);
printf("\nTotal count of upper case chatracter enterd=%d",uppers);
printf("\nTotal count of number enterd=%d",numbers);
return 0;
}