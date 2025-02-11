#include <stdio.h>

int main() {
    int a, b;

    // Prompting the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Check if the integers have opposite signs
    if ((a ^ b) < 0) {
        printf("True\n");  // Output True if they have opposite signs
    } else {
        printf("False\n"); // Output False if they have the same signs
    }

    return 0;
}