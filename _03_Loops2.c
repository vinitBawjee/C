#include <stdio.h>

int main() {

    // count the digits of a given number {
        int num, count = 0;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num == 0) {
            count = 1;
        } else {
            while(num != 0) {
                num = num / 10;
                count++;
            }
        }
        printf("Number of digits: %d\n", count);
    // }

    // print the sum of digits of a given number {
        int num, sum = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &num);
        while(num != 0) {
            digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        printf("Sum of digits: %d\n", sum);
    // }

    // print the reverse of a given number {
        int num, reverse = 0, digit;
        printf("Enter a number: ");
        scanf("%d", &num);
        while(num != 0) {
            digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }
        printf("Reversed number: %d\n", reverse);
    // }

    // print the sum of the series {
        int n, i, sum = 0;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        for(i = 1; i <= n; i++) {
            if(i % 2 == 0)
                sum -= i;
            else
                sum += i;
        }
        printf("Sum of the series: %d\n", sum);
    // }

    // print the factorial of a given number n {
        int n, i;
        int fact = 1;
        printf("Enter a number: ");
        scanf("%d", &n);
        for(i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %d\n", fact);
    // }

    // print the nth Fibonacci number {
        int n, a = 0, b = 1, next, i;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        if(n == 1)
            printf("Fibonacci number at position 1 is %d\n", a);
        else if(n == 2)
            printf("Fibonacci number at position 2 is %d\n", b);
        else {
            for(i = 3; i <= n; i++) {
                next = a + b;
                a = b;
                b = next;
            }
            printf("Fibonacci number at position %d is %d\n", n, b);
        }
    // }

    return 0;
}
