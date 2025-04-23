#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char helper) {
    if (n == 0) return;

    // Step 1: Move n-1 disks from source to helper
    towerOfHanoi(n - 1, source, helper, destination);

    // Step 2: Move nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move n-1 disks from helper to destination
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int n = 3; 
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
