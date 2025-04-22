#include <stdio.h>

// prints a cross pattern of stars (middle row and column)
int main() {
    int rows = 5;
    int mid = rows / 2;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i == mid || j == mid) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
