#include <stdio.h>

// Recursive function to calculate a^b in O(log b)
int power(int a, int b) {
    if (b == 0)
        return 1;

    int halfPower = power(a, b / 2);

    if (b % 2 == 0)
        return halfPower * halfPower;
    else
        return a * halfPower * halfPower;
}

int main() {
    int a, b;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    int result = power(a, b);

    printf("%d^%d = %d\n", a, b, result);

    return 0;
}
