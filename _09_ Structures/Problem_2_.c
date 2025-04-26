#include <stdio.h>

struct Details {
    float salary;
    int age;
};

struct Person {
    char name[50];
    struct Details info;  
};

int main() {
    struct Person p1 = {"Amit", {55000.0, 30}};
    struct Person p2 = {"Sneha", {63000.0, 25}};
    printf("Name of first person: %s\n", p1.name);
    printf("Age of second person: %d\n", p2.info.age);

    return 0;
}
