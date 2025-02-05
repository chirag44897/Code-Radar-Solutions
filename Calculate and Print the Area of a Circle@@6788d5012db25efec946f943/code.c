#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14;

    // Taking input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area
    area = PI * radius * radius;

    // Printing the result
    printf("Area: %.2f\n", area);

    return 0;
}