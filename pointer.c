#include<stdio.h>
int main(){
    int a = 25;
    int* x= &a; //int* --> int ka adddress store krta hai
   // vvip  *x = 7; // a is changed 
   int** y = &x;                    //int** -->  int* ka adress store krta hai
   int*** z =&y;
    printf("%d\n",a); // %p se address print hota hai  
    printf("%d\n",*x); 
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
}