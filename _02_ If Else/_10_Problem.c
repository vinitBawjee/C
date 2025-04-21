#include <stdio.h>

// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
int main() {
    int x1, y1, x2, y2, x3, y3, area;
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%d %d", &x3, &y3);
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (area == 0) {
        printf("The points lie on the same straight line.\n");
    } else {
        printf("The points do NOT lie on the same straight line.\n");
    }
    return 0;
}

    // Example:
    // Input: (1, 2), (2, 4), (3, 6)
    // Output: The points lie on the same straight line.