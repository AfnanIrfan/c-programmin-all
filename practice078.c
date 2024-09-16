/*#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 90)
        printf("Grade: A\n");
    else if(marks >= 80)
        printf("Grade:B\n");
    else if (marks >= 70)
        printf("Grade: C\n");
    else if (marks >= 60)
        printf("Grade:D\n");
    else
        printf("Grade:F\n");

    return 0;
}*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your Marks:");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade A\n");
    }
    else if(marks>=80){
        printf("your grade B\n");
    }
    else if(marks>=70){
        printf(" your grade C\n");
    }
    else if(marks>=60){
        printf("your grade D\n");
    }
    else if(marks>=50){
        printf("your grade E\n");
    }
    else if(marks>=40){
        printf("your grade F \n");
    }
    return 0;
}
