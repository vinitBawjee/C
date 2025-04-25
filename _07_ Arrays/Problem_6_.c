#include <stdio.h>

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int x = 6; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                count++;
            }
        }
    }

    printf("Total number of pairs with sum %d = %d\n", x, count);

    return 0;
}
