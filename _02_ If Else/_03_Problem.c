#include <stdio.h>

// takes an integer input and prints its absolute value
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Absolute value: %d\n", -number);
    } else {
        printf("Absolute value: %d\n", number);
    }
    return 0;
}

    // Example:
    // Input: -7 → Output: Absolute value: 7
    // Input: 10 → Output: Absolute value: 10
    // }