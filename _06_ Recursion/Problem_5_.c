#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)       
        return 1;

    return a * power(a, b - 1); 
}

int main(void)
{
    int a, b;
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    if (b < 0) {
        printf("This program only handles non-negative exponents.\n");
        return 1;
    }

    int result = power(a, b);
    printf("%d^%d = %d\n", a, b, result);
    return 0;
}
