#include <stdio.h>

int main() {
    
    // checks whether a number is even or odd {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }
    // }

    // takes a positive integer as input and checks whether it is divisible by 5 or not {
        int number2;
        printf("Enter a positive integer: ");
        scanf("%d", &number2);
        if (number2 <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            if (number2 % 5 == 0) {
                printf("%d is divisible by 5.\n", number2);
            } else {
                printf("%d is not divisible by 5.\n", number2);
            }
        }
    // }

    // takes an integer input and prints its absolute value {
        int number3;
        printf("Enter an integer: ");
        scanf("%d", &number3);
        if (number3 < 0) {
            printf("Absolute value: %d\n", -number3);
        } else {
            printf("Absolute value: %d\n", number3);
        }
    // Example:
    // Input: -7 → Output: Absolute value: 7
    // Input: 10 → Output: Absolute value: 10
    // }

    // takes the Cost Price (CP) and Selling Price (SP) of an item as input and determines whether the seller made a profit, loss, or no profit/loss, along with the amount {
        float costPrice, sellingPrice, amount;
        printf("Enter the Cost Price: ");
        scanf("%f", &costPrice);
        printf("Enter the Selling Price: ");
        scanf("%f", &sellingPrice);
        if (sellingPrice > costPrice) {
            amount = sellingPrice - costPrice;
            printf("Profit of %.2f\n", amount);
        } else if (costPrice > sellingPrice) {
            amount = costPrice - sellingPrice;
            printf("Loss of %.2f\n", amount);
        } else {
            printf("No profit, no loss.\n");
        }
    // Example:
    // Input: CP = 100, SP = 120 → Output: Profit of 20.00
    // Input: CP = 150, SP = 120 → Output: Loss of 30.00
    // Input: CP = 200, SP = 200 → Output: No profit, no loss.
    // }

    // takes the length and breadth of a rectangle, calculates the area and perimeter, and checks whether the area is greater than the perimeter {
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
    // }

    // takes a positive integer input and checks whether it is a three-digit number {
        int number4;
        printf("Enter a positive integer: ");
        scanf("%d", &number4);
        if (number4 <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            if (number4 >= 100 && number4 <= 999) {
                printf("%d is a three-digit number.\n", number4);
            } else {
                printf("%d is not a three-digit number.\n", number4);
            }
        }
    // }

    // takes a positive integer input and checks whether it is divisible by both 5 and 3 {
        int number5;
        printf("Enter a positive integer: ");
        scanf("%d", &number5);
        if (number5 <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            if (number5 % 5 == 0 && number5 % 3 == 0) {
                printf("%d is divisible by both 5 and 3.\n", number5);
            } else {
                printf("%d is not divisible by both 5 and 3.\n", number5);
            }
        }
    // Example Output:
    // Input: 15 → Output: 15 is divisible by both 5 and 3.
    // Input: 10 → Output: 10 is not divisible by both 5 and 3.
    // }

    // takes three positive integers as input and prints the greatest among them {
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
    // Example:
    // Input: 12 45 30
    // Output: 45 is the greatest number.
    // }

    // takes three numbers as input and checks whether they can form the sides of a triangle {
        int a, b, c;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Sides must be positive numbers.\n");
        } else {
            if (a + b > c && a + c > b && b + c > a) {
                printf("The numbers can form a triangle.\n");
            } else {
                printf("The numbers cannot form a triangle.\n");
            }
        }
    // Example:
    // Input: 3 4 5 → Output: The numbers can form a triangle.
    // Input: 1 2 3 → Output: The numbers cannot form a triangle.
    // }

    // Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line {
        int x1, y1, x2, y2, x3, y3;
        int area;
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
    // Example:
    // Input: (1, 2), (2, 4), (3, 6)
    // Output: The points lie on the same straight line.
    // }

    // Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz (0, 0) {
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
    // Example:
    // Input: (0, 0) → Output: The point is at the origin.
    // Input: (7, 0) → Output: The point lies on the X-axis.
    // Input: (0, -5) → Output: The point lies on the Y-axis.
    // Input: (4, 6) → Output: The point does not lie on the X-axis, Y-axis, or origin.
    // }

    return 0;
}
