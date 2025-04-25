#include <stdio.h>

int main() {
    int arr[] = {5, 7, 10, 15, 20, 25}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[i] + 10;  
        } else {
            arr[i] = arr[i] * 2;    
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
