#include <stdio.h>

// takes a positive integer input and checks whether it is a three-digit number
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (number >= 100 && number <= 999) {
            printf("%d is a three-digit number.\n", number);
        } else {
            printf("%d is not a three-digit number.\n", number);
        }
    }
    return 0;
}