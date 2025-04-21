#include <stdio.h>

// takes the Cost Price (CP) and Selling Price (SP) of an item as input and determines whether the seller made a profit, loss, or no profit/loss, along with the amount
int main() {
    float costPrice, sellingPrice, amount;
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit of %.2f\n", amount);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss of %.2f\n", amount);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}

    // Example:
    // Input: CP = 100, SP = 120 → Output: Profit of 20.00
    // Input: CP = 150, SP = 120 → Output: Loss of 30.00
    // Input: CP = 200, SP = 200 → Output: No profit, no loss.