#include <stdio.h>

int main() {
    int marks[] = {45, 22, 89, 34, 50, 31, 40};  
    int n = sizeof(marks) / sizeof(marks[0]);   
    int max = marks[0]; 

    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }

    printf("Maximum value in the array = %d\n", max);
    return 0;
}
