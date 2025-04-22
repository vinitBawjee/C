#include <stdio.h>

// prints the nth Fibonacci number
int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci number at position 1 is %d\n", a);
    } else if (n == 2) {
        printf("Fibonacci number at position 2 is %d\n", b);
    } else {
        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Fibonacci number at position %d is %d\n", n, b);
    }

    return 0;
}
