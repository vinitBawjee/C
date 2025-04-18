#include <stdio.h>

int main() {

    // print numbers from 1 to 10 {
        int i;
        for(i = 1; i <= 10; i++) {
            printf("%d\n", i);
        }
    // }

    // print all even numbers from 1 to 10 {
        int i2;
        for(i2 = 2; i2 <= 10; i2 += 2) {
            printf("%d\n", i2);
        }
    // }

    // print the table of 19 {
        int i3;
        for(i3 = 1; i3 <= 10; i3++) {
            printf("19 x %d = %d\n", i3, 19 * i3);
        }
    // }

    // display the arithmetic progression 1, 3, 5, 7, 9... up to n terms {
        int n, i4, term = 1;
        printf("Enter number of terms: ");
        scanf("%d", &n);
        for(i4 = 1; i4 <= n; i4++) {
            printf("%d ", term);
            term += 2;
        }
    // }

    // display the arithmetic progression 4, 7, 10, 13, 16... up to n terms {
        int n, i5, term2 = 4;
        printf("Enter number of terms: ");
        scanf("%d", &n);
        for(i5 = 1; i5 <= n; i5++) {
            printf("%d ", term2);
            term2 += 3;
        }
    // }

    // display the geometric progression 1, 2, 4, 8, 16, 32... up to n terms {
        int n, i6, term3 = 1;
        printf("Enter number of terms: ");
        scanf("%d", &n);
        for(i6 = 1; i6 <= n; i6++) {
            printf("%d ", term3);
            term3 *= 2;
        }
    // }

    // display the AP 10, 7, 4, ... up to all positive terms {
        int term4;
        for(term4 = 10; term4 > 0; term4 -= 3) {
            printf("%d ", term4);
        }
    // }

    // Check if a number is prime {
        int num, j, isPrime = 1;
        printf("Enter a number to check if it's prime: ");
        scanf("%d", &num);
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (j = 2; j * j <= num; j++) {  
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d is a prime number\n", num);
        } else {
            printf("%d is not a prime number\n", num);
        }
    // }

    // print odd numbers from 1 to 10 {
        int j2;
        for(j2 = 1; j2 <= 10; j2++) {
            if(j2 % 2 == 0) {
                continue;
            }
            printf("%d\n", j2);
        }
    // }

    return 0;
}
