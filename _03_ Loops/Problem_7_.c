#include <stdio.h>

// displays decreasing arithmetic progression: 10, 7, 4, ..., all positive terms
int main() {
    int term;
    for (term = 10; term > 0; term -= 3) {
        printf("%d\n", term);
    }
    return 0;
}
