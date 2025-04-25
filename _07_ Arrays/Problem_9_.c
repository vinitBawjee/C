#include <stdio.h>

int main() {
    int original[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(original) / sizeof(original[0]);
    int reversed[n]; 

    for (int i = 0; i < n; i++) {
        reversed[i] = original[n - 1 - i];
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", original[i]);
    }

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }

    printf("\n");
    return 0;
}
