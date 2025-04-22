#include <stdio.h>

// prints number rows for odd lines and alphabet rows for even lines
int main() {
    int r, c;
    int total = 5;

    for (r = 1; r <= total; r++) {
        if (r % 2 == 1) {
            for (c = 1; c <= r; c++) {
                printf("%d ", c);
            }
        } else {
            char ch;
            for (ch = 'A'; ch < 'A' + r; ch++) {
                printf("%c ", ch);
            }
        }
        printf("\n");
    }
    return 0;
}
