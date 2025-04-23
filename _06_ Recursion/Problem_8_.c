#include <stdio.h>

void mazePath(int i, int j, int n, int m, char moveSequence[]) {
    if (i == n - 1 && j == m - 1) {
        moveSequence[i + j] = '\0';
        printf("%s\n", moveSequence);
        return;
    }

    if (i < n - 1) {
        moveSequence[i + j] = 'D';
        mazePath(i + 1, j, n, m, moveSequence);
    }

    if (j < m - 1) {
        moveSequence[i + j] = 'R';
        mazePath(i, j + 1, n, m, moveSequence);
    }
}

int main() {
    int n = 3, m = 3;
    char moveSequence[20]; 
    mazePath(0, 0, n, m, moveSequence);
    return 0;
}
