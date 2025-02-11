#include <stdio.h>

int main() {
    int a, b, result;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform bitwise OR operation
    result = a | b;

    // Display the result
    printf("Output: %d\n", result);

    return 0;
}