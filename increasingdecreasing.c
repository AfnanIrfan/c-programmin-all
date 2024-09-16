#include <stdio.h>

// Function to print numbers in increasing order
void printIncreasing(int n) {
    if (n > 0) {
        printIncreasing(n - 1);
        printf("%d \n ", n);
    }
}

// Function to print numbers in decreasing order
void printDecreasing(int n) {
    if (n > 0) {
        printf("%d \n", n);
        printDecreasing(n - 1);
    }
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Increasing order
    printf("Increasing Order: ");
    printIncreasing(n);
    printf("\n");

    // Decreasing order
    printf("Decreasing Order: ");
    printDecreasing(n);
    printf("\n");

    return 0;
}
