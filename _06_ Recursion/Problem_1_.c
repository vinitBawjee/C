#include <stdio.h>

int factorial(int n)        
{
    if (n == 0)           
        return 1;

    return n * factorial(n-1);  
}

int main()
{
    int n;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
