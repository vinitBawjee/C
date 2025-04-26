#include <stdio.h>

struct book {
    char name[100];
    float price;
    int pages;
};

int main() {
    struct book b;

    printf("Enter book name: ");
    fgets(b.name, sizeof(b.name), stdin);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("Enter number of pages: ");
    scanf("%d", &b.pages);

    printf("\n--- Book Details ---\n");
    printf("Name: %s", b.name);
    printf("Price: %.2f\n", b.price);
    printf("Pages: %d\n", b.pages);

    return 0;
}
