#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    if(num1>=100&&num2<=999){
        printf("THe number you entred is three digit");
    }
    else{
        printf("the number you entered is 2 digit");
    }

    
    return 0;
}