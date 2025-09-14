#include <stdio.h>


int main() {
    int x, y, sum;

    // Taking the value from the user 
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    // Processing the sum between the two numbers
    sum = x + y;

    // Final output
    printf("The sum of %d and %d is: %d\n", x, y, sum);

    return 0;
}
