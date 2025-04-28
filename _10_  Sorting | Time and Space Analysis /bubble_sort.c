// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {       
//         for (int j = 0; j < n-i-1; j++) {  
//             if (arr[j] > arr[j+1]) {       
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // n = 24 / 4 = 6

//     bubbleSort(arr, n);

//     printf("Sorted Array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------

// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     if (n == 1) 
//         return;

//     for (int i = 0; i < n-1; i++) {  
//         if (arr[i] > arr[i+1]) {     
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }

//     bubbleSort(arr, n-1);
// }

// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr, n);

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
    
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    if (n == 1)
        return;

    bool swapped = false;

    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            swapped = true;
        }
    }

    // If no two elements were swapped, array is already sorted
    if (!swapped)
        return;

    bubbleSort(arr, n-1);
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

