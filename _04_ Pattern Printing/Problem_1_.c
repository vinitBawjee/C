#include <stdio.h>

// prints a rectangle of stars (4 rows, 5 columns)
int main() {
    int row, col;
    int totalRows = 4;  
    int totalCols = 5;  

    for (row = 1; row <= totalRows; row++) {
        for (col = 1; col <= totalCols; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
