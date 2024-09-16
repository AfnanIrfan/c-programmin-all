#include<stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i <= 4; i++) {
        int a = i + 1;
        printf("Enter element number %d: ", a);
        scanf("%d", &arr[i]);
    }

    printf("%d\n", arr[1]);

    return 0;
}
