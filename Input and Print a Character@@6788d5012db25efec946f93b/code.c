#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Space before %c ensures it ignores any leftover newline
    printf("You entered: %c\n", ch);
    return 0;
}