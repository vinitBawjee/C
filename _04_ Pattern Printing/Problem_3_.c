#include <stdio.h>

// prints right-angled triangle pattern of stars
int main() {
    int r, s;
    int steps = 4;  

    for (r = 1; r <= steps; r++) {
        for (s = 1; s <= r; s++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
