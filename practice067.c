#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
     if ((year % 4 == 0 && year % 100 != 0) ){
        printf("THis is year is leap year");
     }
     else{
        printf("This is  not leap year ");
     }
    return 0;
}