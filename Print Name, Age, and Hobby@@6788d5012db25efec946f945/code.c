#include <stdio.h>

int main() {
    char name[50];  // To store the user's name
    int age;        // To store the user's age
    char hobby[50]; // To store the user's hobby

    // Taking input
    printf("Enter your name, age, and hobby: \n");
    scanf("%s %d %[^\n]%*c", name, &age, hobby);

    // Printing the results
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}