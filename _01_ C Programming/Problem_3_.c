#include <stdio.h>

// calculates and prints the area of a circle
int main() {
    float radius;
    printf("Enter Radius for Calculating Area of a Circle: ");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("Area of a Circle: %f\n", area);
    return 0;
}
