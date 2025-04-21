#include <stdio.h>

// takes three positive integers as input and prints the greatest among them
int main() {
    int a, b, c;
    printf("Enter three positive integers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Please enter only positive integers.\n");
    } else {
        if (a >= b && a >= c) {
            printf("%d is the greatest number.\n", a);
        } else if (b >= a && b >= c) {
            printf("%d is the greatest number.\n", b);
        } else {
            printf("%d is the greatest number.\n", c);
        }
    }
    return 0;
}

    // Example:
    // Input: 12 45 30
    // Output: 45 is the greatest number.
    // }