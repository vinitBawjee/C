#include <stdio.h>

int main() {
    int marks[] = {45, 22, 89, 34, 50, 31, 40};  
    int n = sizeof(marks) / sizeof(marks[0]);   

    printf("Roll numbers of students with marks less than 35:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] < 35) {
            printf("Roll Number: %d\n", i);
        }
    }

    return 0;
}
