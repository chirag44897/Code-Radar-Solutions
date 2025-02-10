#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;

    // Taking input
    scanf("%f", &radius);

    // Calculating area
    area = pi * radius * radius;

    // Printing output with two decimal places
    printf("Area: %.2f\n", area);

    return 0;
}