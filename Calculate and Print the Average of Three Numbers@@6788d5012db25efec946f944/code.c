#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Print the average
    printf("Average: %.2f\n", average);

    return 0;
}
