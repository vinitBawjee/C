#include <stdio.h>

// takes a positive integer as input and checks whether it is divisible by 5 or not
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (number % 5 == 0) {
            printf("%d is divisible by 5.\n", number);
        } else {
            printf("%d is not divisible by 5.\n", number);
        }
    }
    return 0;
}