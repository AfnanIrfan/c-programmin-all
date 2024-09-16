#include<stdio.h>
void india(){
    printf("you are in india \n"); 
    australia(); // calling australia ///3
    return;
}
void england(){
    printf("you are in england \n"); //6
    return;
}
void australia(){
    printf("you are in austaralia \n"); //4
    england(); //calling england //5
    return;
}
int main(){
    india(); //calling india //1
    return 0;
}