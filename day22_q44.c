#include <stdio.h>

int main() {
    int n, numerator = 1, denominator = 2;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;      // numerator increments by 2 (1, 3, 5, 7, ...)
        denominator += 2;    // denominator increments by 2 (2, 4, 6, 8, ...)
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);
    return 0;
}
