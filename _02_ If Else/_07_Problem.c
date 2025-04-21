#include <stdio.h>

// takes a positive integer input and checks whether it is divisible by both 5 and 3 
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (number % 5 == 0 && number % 3 == 0) {
            printf("%d is divisible by both 5 and 3.\n", number);
        } else {
            printf("%d is not divisible by both 5 and 3.\n", number);
        }
    }
    return 0;
}

    // Example Output:
    // Input: 15 → Output: 15 is divisible by both 5 and 3.
    // Input: 10 → Output: 10 is not divisible by both 5 and 3.
    // }