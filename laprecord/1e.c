#include <stdio.h> 
#include <conio.h> 

void main() // program execution starts from here
{ 
 
   int a, b, c, big ; //variable declaration
   //clrscr() ; 
 
    printf("Enter three numbers : ") ; //asking user to enter 3 numbers
    scanf("%d %d %d", &a, &b, &c) ; //reading user entered 3 numbers

//Ternary operator code logic to find the biggest number 
     big = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c) ; 
 
    printf("\nThe biggest number is : %d", big) ; //printing biggest number
    getch() ; 
}