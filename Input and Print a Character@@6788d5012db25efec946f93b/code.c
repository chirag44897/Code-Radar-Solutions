#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // The space before %c helps ignore any whitespace
    printf("You entered: %c\n", ch);
    return 0;
}