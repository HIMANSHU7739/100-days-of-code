#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {       // rows
        for(int j = 1; j <= i; j++) {   // print i stars in ith row
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
