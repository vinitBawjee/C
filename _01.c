#include <stdio.h>

int main() {

    // Problem - Volume of a Sphere {
        int radius = 7;
        float volume = 4 * 3.14 * radius * radius * radius / 3;
        printf("Volume of a Sphere: %f", volume);
    // }

    printf("\n");

    // Problem - Calculating Percentage {
        float math = 95;
        float english = 97;
        float science = 92;
        float history = 94;
        float computer = 99;

        float percent = (math + english + science + history + computer) / 5;
        printf("Percentage: %f", percent);
    // }

    printf("\n");

    // Problem - Calculating Area of a Circle {
        float radius2;
        printf("Enter Radius for Calculating Area of a Circle : ");
        scanf("%f", &radius2);
        float area = 3.14 * radius2 * radius2;
        printf("Area of a Circle: %f", area);
    // }

    printf("\n");

        char ch;
        printf("Enter Character : ");
        scanf(" %c", &ch);
        printf("ch - %c", ch);

    printf("\n");

    
    return 0;
}
