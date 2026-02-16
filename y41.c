//write a program to print all integers from 100 to 300 which are divisible by 17
#include <stdio.h>
int main() {
    for (int i = 100; i <= 300; i++) {
        if (i % 17 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}