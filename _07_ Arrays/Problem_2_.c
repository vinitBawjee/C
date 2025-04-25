#include <stdio.h>

int main() {
    int marks[] = {45, 22, 89, 34, 50, 31, 40}; 
    int n = sizeof(marks) / sizeof(marks[0]);   
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
