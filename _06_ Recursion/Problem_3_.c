#include <stdio.h>

void printAscending(int n)
{
    if (n == 0)          
        return;

    printAscending(n - 1); 
    printf("%d ", n);      
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

    printAscending(n);  
    printf("\n");
    return 0;
}
