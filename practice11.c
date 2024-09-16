#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to check leap or not leap\n:");
    scanf("%d",&year);
    if(year%4==0){
        printf("this is leap year ");
    }
    else{
        printf("This is ordinary year");
    }
    return 0;
}