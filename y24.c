<<<<<<< HEAD
// even number triangle
#include <stdio.h>
int main(){
    int n;
    printf("enter the value n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
           int a=2;
        for(int j=1;j<=i ;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
=======
// write a program to find the character it is vowel or consonant
#include <stdio.h>
int main(){
  char x;
  printf("Enter a character: ");
  scanf("%c", &x);
  if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
      x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
      printf("%c is a vowel.\n", x);
  } else {
      printf("%c is a consonant.\n", x);
  }
  return 0;
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
}