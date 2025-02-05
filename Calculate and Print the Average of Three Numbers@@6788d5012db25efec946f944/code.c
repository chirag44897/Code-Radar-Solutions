#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Taking input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating average
    average = (num1 + num2 + num3) / 3.0;

    // Printing the result
    printf("Average: %.2f\n", average);

    return 0;
}









