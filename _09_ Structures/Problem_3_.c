#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    int test_matches;
    float average_runs;
} Cricketer;

int main() {
    Cricketer players[3];

    printf("Enter details of 3 cricketers:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nCricketer %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", players[i].name);

        printf("Age: ");
        scanf("%d", &players[i].age);

        printf("Number of test matches: ");
        scanf("%d", &players[i].test_matches);

        printf("Average runs: ");
        scanf("%f", &players[i].average_runs);
    }

    printf("\n--- Cricketer Records ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nCricketer %d\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("Test Matches: %d\n", players[i].test_matches);
        printf("Average Runs: %.2f\n", players[i].average_runs);
    }

    return 0;
}
