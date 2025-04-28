// #include <stdio.h>

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int min_idx = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
    
//     return 0;
// }



#include <stdio.h>

int findMinIndex(int arr[], int start, int n) {
    int min_idx = start;
    for (int i = start+1; i < n; i++) {
        if (arr[i] < arr[min_idx])
            min_idx = i;
    }
    return min_idx;
}

void selectionSortRecursive(int arr[], int start, int n) {
    if (start >= n-1)
        return;

    int min_idx = findMinIndex(arr, start, n);

    if (min_idx != start) {
        int temp = arr[start];
        arr[start] = arr[min_idx];
        arr[min_idx] = temp;
    }

    selectionSortRecursive(arr, start+1, n);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSortRecursive(arr, 0, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
