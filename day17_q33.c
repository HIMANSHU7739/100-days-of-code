#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, digitCount = 0, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count digits
    while (num != 0) {
        digitCount++;
        num /= 10;
    }

    num = originalNum;

    // Calculate sum of digits raised to the power of digitCount
    while (num != 0) {
        digit = num % 10;
        sum += (int)pow(digit, digitCount);
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
