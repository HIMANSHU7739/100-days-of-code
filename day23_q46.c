#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {       // 5 rows
        for(int j = 0; j < 5; j++) {   // 5 columns
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
