#include <stdio.h>

int main() {
    int a, b, himanshu;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    himanshu = a;
    a = b;
    b = himanshu;

    printf("After swap: %d %d\n", a, b);

    return 0;
}