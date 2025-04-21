#include <stdio.h>

// Factorial function
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// nPr = n! / (n - r)!
int permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

// nCr = n! / (r! * (n - r)!)
int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter r : ");
    scanf("%d", &r);

    printf("nPr = %d\n", permutation(n, r));
    printf("nCr = %d\n", combination(n, r));

    return 0;
}

// example -
// Enter n : 5
// Enter r : 3
// nPr = 60
// nCr = 10
