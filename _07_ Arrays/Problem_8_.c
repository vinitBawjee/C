#include <stdio.h>
#include <limits.h>  

int main() {
    int arr[] = {10, 35, 50, 24, 88, 65, 88}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("Second largest element not found (all elements may be equal).\n");
    } else {
        printf("Second largest element is %d\n", second);
    }

    return 0;
}
