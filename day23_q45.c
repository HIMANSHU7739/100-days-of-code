#include <stdio.h>

int main() {
    int n;
    int numerator = 2, denominator = 3;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;      // numerator increases by 2 (2, 4, 6, 8, ...)
        denominator += 4;    // denominator increases by 4 (3, 7, 11, 15, ...)
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);
    return 0;
}
