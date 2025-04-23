#include <stdio.h>

void printDescending(int n)
{
    if (n == 0)          
        return;

    printf("%d ", n);     
    printDescending(n-1); 
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printDescending(n);
    printf("\n");
    return 0;
}
