#include <stdio.h>

// prints repeated rows of 'A' to 'D'
int main() {
    int x;
    int repeat = 4;

    for (x = 1; x <= repeat; x++) {
        char ch;
        for (ch = 'A'; ch <= 'D'; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
