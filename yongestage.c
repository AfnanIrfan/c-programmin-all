#include<stdio.h>
int main(){
    int ramAge;
    int shyamAge;
    int ajayAge;
    printf("Enter the age of ram:");
    scanf("%d",&ramAge);
    printf("Enter the age of shyam:");
    scanf("%d",&shyamAge);
    printf("Enter the age of ajay:");
    scanf("%d",&ajayAge);
    if(ramAge<shyamAge&&ramAge<ajayAge){
        printf("Ram is the yongest\n");
    }
    else if(shyamAge<ramAge&&shyamAge<ajayAge){
        printf("Shyam is the yongest\n");
    }
    else if(ajayAge<shyamAge&&ajayAge<ramAge){
        printf("Ajay is the yongest man\n");
    }
    else{
        printf("there is tie in age");
    }

    return 0;
}