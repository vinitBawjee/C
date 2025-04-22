#include <stdio.h>

// prints a triangle of odd numbers
int main() {
    int a, b;
    int rows = 4;

    for (a = 1; a <= rows; a++) {
        int odd = 1;
        for (b = 1; b <= a; b++) {
            printf("%d ", odd);
            odd += 2;
        }
        printf("\n");
    }
    return 0;
}
