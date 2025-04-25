#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 5, 3};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate = -1;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if (duplicate != -1)
            break;
    }

    if (duplicate != -1) {
        printf("Duplicate element found: %d\n", duplicate);
    } else {
        printf("No duplicate element found.\n");
    }

    return 0;
}
