#include <stdio.h>

// Function to calculate the product of elements in an array
long long calculateProduct(int arr[], int size) {
    long long product = 1;

    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    return product;
}

int main() {
    int size;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
            }

    // Calculate the product of elements
    long long product = calculateProduct(arr, size);

    // Display the result
    printf("Product of all elements: %lld\n", product);

    return 0;
}
