#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible to drive ");

    }
    else{
        printf("you are not eligible to drive");
    }

    return 0;
}