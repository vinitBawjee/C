#include <stdio.h>

int main() {
    int arr[] = {1, 5, 3, 2, 4, 6};
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == x) {
                    count++;
                }
            }
        }
    }

    printf("Total number of triplets with sum %d = %d\n", x, count);

    return 0;
}

// Example:
// For arr[] = {1, 5, 3, 2, 4, 6} and x = 10, valid triplets could be:

// (1, 3, 6)

// (1, 4, 5)

// (2, 3, 5)

// (2, 4, 4) 
