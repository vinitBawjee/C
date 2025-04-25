#include <stdio.h>

int main() {
    int students[4][2];  

    printf("Enter roll number and marks for 4 students:\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Roll Number: ");
        scanf("%d", &students[i][0]);

        printf("  Marks: ");
        scanf("%d", &students[i][1]);
    }

    printf("\nStored data:\n");
    printf("Roll No.\tMarks\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t\t%d\n", students[i][0], students[i][1]);
    }

    return 0;
}
