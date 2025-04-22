#include <stdio.h>

// displays arithmetic progression: 4, 7, 10, ..., up to n terms
int main() {
    int n, i, term = 4;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", term);
        term += 3;
    }
    return 0;
}
