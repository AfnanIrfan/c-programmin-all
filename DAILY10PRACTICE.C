#include<stdio.h>
int main()
{   int num;
    printf("Enter a number to check odd or even:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even number");
    }
    else{
        printf("odd number");
    }
    return 0;
}