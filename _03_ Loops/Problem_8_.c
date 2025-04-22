#include <stdio.h>

// checks whether a number is prime
int main() {
    int num, j, isPrime = 1;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
