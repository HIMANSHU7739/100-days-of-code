#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {            // for each row
        for(int j = 5 - i + 1; j <= 5; j++) { // print from (6 - i) to 5
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
