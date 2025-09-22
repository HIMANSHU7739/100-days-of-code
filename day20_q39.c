#include <stdio.h>
int main() {
    int num, rem;
    int product = 1;
    int hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp > 0) {
        rem = temp % 10;
        if (rem % 2 == 1) {
            product *= rem;
            hasOdd = 1;
        }
        temp /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found. Product is 0.\n");
    return 0;
}