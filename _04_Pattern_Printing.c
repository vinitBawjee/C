#include <stdio.h>

int main() {

    // {
        int row, col;
        int totalRows = 4;  
        int totalCols = 5;  

        for (row = 1; row <= totalRows; row++) {
            for (col = 1; col <= totalCols; col++) {
                printf("* ");
            }
            printf("\n");
        } 
    // }

    // {
        int i, j;
        int barobar = 4;   
        int count = 4;     

        for (i = 1; i <= barobar; i++) {
            for (j = 1; j <= count; j++) {
                printf("%d ", j);
            }
            printf("\n");
        }
    // }

    // {
        int r, s;
        int steps = 4;  

        for (r = 1; r <= steps; r++) {
            for (s = 1; s <= r; s++) {
                printf("* ");
            }
            printf("\n");
        }
    // }

    // {
        int line, star;
        int height = 5;  

        for (line = 1; line <= height; line++) {
            for (star = height; star >= line; star--) {
                printf("* ");
            }
            printf("\n");
        }
    // }

    // {
        int a, b;
        int rows = 4;

        for (a = 1; a <= rows; a++) {
            int odd = 1;
            for (b = 1; b <= a; b++) {
                printf("%d ", odd);
                odd += 2;
            }
            printf("\n");
        }
    // }

    // {
        int x, y;
        int repeat = 4;

        for (x = 1; x <= repeat; x++) {
            char ch;
            for (ch = 'A'; ch <= 'D'; ch++) {
                printf("%c ", ch);
            }
            printf("\n");
        }
    // }

    // {
        int r, c;
        int total = 5;

        for (r = 1; r <= total; r++) {
            if (r % 2 == 1) {  
                for (c = 1; c <= r; c++) {
                    printf("%d ", c);
                }
            } else {  
                char ch;
                for (ch = 'A'; ch < 'A' + r; ch++) {
                    printf("%c ", ch);
                }
            }
            printf("\n");
        }
    // }

    // {
        int rows = 5;
        int mid = rows / 2;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows; j++) {
                if (i == mid || j == mid) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    // }

    // {
        int num = 1;
        int rows = 4; 

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    // }

    // {
        int rows = 4;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
    // }

    // {
        int i, j, space;
        int rows = 4;

        for (i = 1; i <= rows; i++) {
            for (space = 1; space <= rows - i; space++) {
                printf("  ");
            }

            for (j = 1; j <= 2 * i - 1; j++) {
                printf("%d ", j);
            }

            printf("\n");
        }
    // }

    return 0;
}
