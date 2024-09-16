#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter first number\n:");
    scanf("%d",&num1);
    printf("Enter second number\n:");
    scanf("%d",&num2);
    if(num1>num2){
        printf("THe first number is largest number\n");
    }
    else if(num2>num1){
        printf("the second number is largest\n");
    }
    else{
        printf("both number are equal\n");
    }
    return 0;

}