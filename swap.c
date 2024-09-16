#include<stdio.h>
void swap(int a,int b){
   
    return;
}
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
 int temp = a;
    a= b;
    b= temp;
    swap(a,b);

    printf("the value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}