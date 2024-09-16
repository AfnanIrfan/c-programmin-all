#include<stdio.h>
int main(){
    int marks[10] ={95,90,31,25,100,50,65,89,97};
    for(int i=0;i<10;i++){
        if(marks[i]<34){
            printf("Roll number %d has marks less than 35.\n", marks[i]);
        }
    }
    return 0;    
}