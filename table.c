#include<stdio.h>

int main() {
    int n;
    
    // Ask the user for input
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);
    
    // Print the multiplication table for the given number
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}
