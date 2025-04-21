#include <stdio.h>

// Function to find GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// example -
// Enter first number: 36
// Enter second number: 60
// GCD of 36 and 60 is: 12