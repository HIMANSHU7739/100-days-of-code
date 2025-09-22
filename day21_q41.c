#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, temp;
    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);

    // Remove first digit, then add last digit at the front and first digit at the end
    swappedNum = lastDigit * (int)pow(10, digits); // place last digit at front
    temp = num % (int)pow(10, digits); // remove first digit
    swappedNum += temp; // add middle part
    swappedNum -= lastDigit; // remove old last digit
    swappedNum += firstDigit; // insert old first digit at end

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
