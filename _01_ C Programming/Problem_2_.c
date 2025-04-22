#include <stdio.h>

// calculates and prints the percentage of 5 subjects
int main() {
    float math = 95;
    float english = 97;
    float science = 92;
    float history = 94;
    float computer = 99;

    float percent = (math + english + science + history + computer) / 5;
    printf("Percentage: %f\n", percent);
    return 0;
}
