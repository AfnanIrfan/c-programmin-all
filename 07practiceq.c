#include<stdio.h>
int main(){
    float bmi;
    printf("Enter your BMI:");
    scanf("%f",&bmi);
    if (bmi<18.5)
    {
        printf("under weight\n");
    }
    else if(bmi>=18.5&&bmi<25){
        printf("Normal weight\n");
    }
    else if(bmi>=25&&bmi<30){
        printf("obesity\n");
    }
    else{
        printf("Invalid bmi\n");
    }
    
    return 0;
}