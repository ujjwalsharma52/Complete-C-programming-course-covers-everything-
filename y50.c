<<<<<<< HEAD
#include <stdio.h>
int main(){
  int n;
  printf("enter bthe value of n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1 ;j<=i;j++){
      printf("%c ",i+64);
    }
    printf("\n");
  }
  return 0;
}
=======
// write a program to find leap year or not
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
