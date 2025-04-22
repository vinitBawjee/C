#include <stdio.h>

// prints inverted triangle of stars
int main() {
    int line, star;
    int height = 5;  

    for (line = 1; line <= height; line++) {
        for (star = height; star >= line; star--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
