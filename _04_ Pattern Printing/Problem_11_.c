#include <stdio.h>

// prints a number pyramid
int main() {
    int i, j, space;
    int rows = 4;

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}
