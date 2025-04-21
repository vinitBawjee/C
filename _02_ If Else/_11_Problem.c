#include <stdio.h>

// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz (0, 0)
int main() {
    int x, y;
    printf("Enter the coordinates of the point (x y): ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    } else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } else {
        printf("The point does not lie on the X-axis, Y-axis, or origin.\n");
    }
    return 0;
}

    // Example:
    // Input: (0, 0) → Output: The point is at the origin.
    // Input: (7, 0) → Output: The point lies on the X-axis.
    // Input: (0, -5) → Output: The point lies on the Y-axis.
    // Input: (4, 6) → Output: The point does not lie on the X-axis, Y-axis, or origin.