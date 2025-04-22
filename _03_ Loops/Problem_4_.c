#include <stdio.h>

// displays arithmetic progression: 1, 3, 5, ..., up to n terms
int main() {
    int n, i, term = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", term);
        term += 2;
    }
    return 0;
}
