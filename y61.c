#include <stdio.h>

// Function to calculate factorial
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;//f=f*i
    }
    return f;
}

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i + 1 <= n) {
            // Add 1/i! + 1/(i+1)!
            sum += (1.0 / fact(i)) + (1.0 / fact(i + 1));
            i += 2;
        }

        if (i + 1 <= n) {
            // Subtract (1/i! * 1/(i+1)!)
            sum -= (1.0 / fact(i)) * (1.0 / fact(i + 1));
            i += 2;
        }
    }

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}
