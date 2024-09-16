#include<stdio.h>

int main() {
    char grade;
    printf("Enter a grade (A-G): ");
    scanf("%c", &grade);

    if(grade == 'A') {
        printf("90-100\n");
    } else if (grade == 'B') {
        printf("80-89\n");
    } else if(grade == 'C') {
        printf("70-79\n");
    } else if(grade == 'D') {
        printf("60-69\n");
    } else if(grade == 'E') {
        printf("50-59\n");
    } else if(grade == 'F') {
        printf("40-49\n");
    } else if(grade == 'G') {
        printf("30-39\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
