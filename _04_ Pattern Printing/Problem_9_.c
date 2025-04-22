#include <stdio.h>

// prints a continuous number triangle
int main() {
    int num = 1;
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
