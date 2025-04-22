#include <stdio.h>

// prints rows with numbers from 1 to 4 (4 times)
int main() {
    int i, j;
    int count = 4;

    for (i = 1; i <= count; i++) {
        for (j = 1; j <= count; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
