#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str); // only first will be considerd
    //gets(str); //entire sentence can be taken
    printf(" your input was : %s",str);
    
    return 0;
}