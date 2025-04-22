#include <stdio.h>

// prints the reverse of a given number
int main() {
    int num, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
