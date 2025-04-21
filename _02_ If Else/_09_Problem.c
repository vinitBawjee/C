#include <stdio.h>

// takes three numbers as input and checks whether they can form the sides of a triangle
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive numbers.\\n");
    } else {
        if (a + b > c && a + c > b && b + c > a) {
            printf("The numbers can form a triangle.\\n");
        } else {
            printf("The numbers cannot form a triangle.\\n");
        }
    }
    return 0;
}

    // Example:
    // Input: 3 4 5 → Output: The numbers can form a triangle.
    // Input: 1 2 3 → Output: The numbers cannot form a triangle.
    // }