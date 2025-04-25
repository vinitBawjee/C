#include <stdio.h>

int main() {
    int arr[] = {5, 7, 10, 15, 20, 25};  
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i]; 
        } else {
            oddSum += arr[i];   
        }
    }

    int difference = evenSum - oddSum;

    printf("Sum at even indices = %d\n", evenSum);
    printf("Sum at odd indices = %d\n", oddSum);
    printf("Difference (even - odd) = %d\n", difference);

    return 0;
}
