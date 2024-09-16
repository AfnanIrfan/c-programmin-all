#include<stdio.h>
int main(){
    int n;
    printf("Enter percentage: ");
    scanf("%d", &n);

    if(n > 90) {
        printf("Grade A\n");
    }
    else if(n > 80) {
        printf("Grade B\n");
    }
    else if(n > 70) {
        printf("Grade C\n");
    }
    else if(n > 60) {
        printf("Grade D\n");
    }
    else if(n > 50) {
        printf("Grade E\n");
    }
    else if(n > 40) {
        printf("Grade F\n");
    }
    else {
        printf("You are failed\n");
    }
    
    return 0;
}