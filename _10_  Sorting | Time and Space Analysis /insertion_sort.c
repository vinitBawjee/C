// #include <stdio.h>

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     insertionSort(arr, n);

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }



#include <stdio.h>

void insertionSortRecursive(int arr[], int n) {
    if (n <= 1)
        return;

    insertionSortRecursive(arr, n-1);

    int last = arr[n-1];
    int j = n-2;

    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSortRecursive(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
