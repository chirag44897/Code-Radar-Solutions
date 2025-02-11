#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Check for opposite signs using bitwise XOR
    if ((a ^ b) < 0) {
        printf("True\n");  // Opposite signs
    } else {
        printf("False\n"); // Same signs
    }

    return 0;
}