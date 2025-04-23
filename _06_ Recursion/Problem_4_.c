#include <stdio.h>

void printSum(int i, int n, int sum)
{
    if (i > n) {                  
        printf("Sum = %d\n", sum); 
        return;
    }

    printSum(i + 1, n, sum + i);  
}

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printSum(1, n, 0);            
    return 0;
}
