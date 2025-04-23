#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)           
        return 0;
    if (n == 1)           
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main(void)
{
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    int result = fibonacci(n);
    printf("Fibonacci number at position %d is %d\n", n, result);
    return 0;
}
