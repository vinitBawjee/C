#include <stdio.h>

// Swap function using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// example -
// Enter value of a: 5
// Enter value of b: 10
// Before swapping: a = 5, b = 10
// After swapping: a = 10, b = 5