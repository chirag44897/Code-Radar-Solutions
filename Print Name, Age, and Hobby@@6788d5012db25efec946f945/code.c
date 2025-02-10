#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;

    // Taking input
    scanf("%s %d %s", name, &age, hobby);

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}