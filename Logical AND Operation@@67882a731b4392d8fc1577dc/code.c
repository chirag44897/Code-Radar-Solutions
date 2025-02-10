#include <stdio.h>

int main() {
    int a, b;

    // Taking input
    scanf("%d %d", &a, &b);

    // Checking condition using logical AND (&&) operator
    if (a > 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}