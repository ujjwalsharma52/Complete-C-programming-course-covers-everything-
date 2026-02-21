<<<<<<< HEAD
// zero one squre
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n ;i++){
        for( int j=1; j<=n;j++){
            if((i+j)%2==0)
                printf("%d",1);
                else
                    printf("%d",0);
             }
            printf("\n");
    }
=======
// write program to print sum of 2 and 3 place of given number five digits
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Extracting the 2nd and 4rd digits from the right
    sum += (n / 10) % 10; // 2nd place (tens)
    sum += (n / 1000) % 10; // 43y29rd place (hundreds)

    printf("Sum of the 2nd and 4rd digits = %d\n", sum);
>>>>>>> b8c8d93d1547e1c1a311b84e72776280f983facf
    return 0;
}