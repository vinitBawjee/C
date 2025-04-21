#include <stdio.h>

// Function to calculate factorial
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Function to calculate nCr
int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int rows;
    printf("Enter rows (Pascal Triangle): ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // For spacing
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }
        // Print values
        for (int j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}

// example -
//           1
//         1   1
//       1   2   1
//     1   3   3   1
//   1   4   6   4   1
// 1   5  10  10   5   1
