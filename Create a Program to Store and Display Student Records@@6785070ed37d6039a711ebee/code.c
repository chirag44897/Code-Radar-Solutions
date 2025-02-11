#include <stdio.h>

// Define the structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Prompt user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of Student structures
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (Roll Number, Name, Marks):\n", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.1f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}