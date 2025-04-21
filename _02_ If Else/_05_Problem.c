#include <stdio.h>

// takes the length and breadth of a rectangle, calculates the area and perimeter, and checks whether the area is greater than the perimeter
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    if (area > perimeter) {
        printf("Area is greater than perimeter.\n");
    } else if (area < perimeter) {
        printf("Perimeter is greater than area.\n");
    } else {
        printf("Area and perimeter are equal.\n");
    }
    return 0;
}