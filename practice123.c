#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter cost price:\n");
    scanf("%d",&cp);
    printf("Enter selling price\n:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(sp==cp){
        printf("no loss, no profit");
    }
    return 0;
}