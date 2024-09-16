#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num%2 ==0)
        printf("The number iseven\n");
    else
        printf("The number is odd\n");

    return 0;
}
