#include <stdio.h>

// Function to input roll numbers and marks for 4 students
void input_data(int data[4][2]) {
    for (int i = 0; i < 4; ++i) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &data[i][0]);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &data[i][1]);
    }
}

// Function to display the matrix
void display_data(int data[4][2]) {
    printf("Roll Number\tMarks\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d\t\t%d\n", data[i][0], data[i][1]);
    }
}

// Main function
int main() {
    int student_data[4][2];  // 2D array to store roll numbers and marks

    // Input data for 4 students
    input_data(student_data);

    // Display the matrix
    printf("\nStudent Data:\n");
    display_data(student_data);

    return 0;
}