#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st side of traingle:");
    scanf("%d",&a);
    printf("Enter second side of triangle:");
    scanf("%d",&b);
    printf("Enter 3rd side of triangle:");
    scanf("%d",&c);
    if(a+b>c &&b+c>a &&c+a>b){
        printf("This is valid triangle ");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}