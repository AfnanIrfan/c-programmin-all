#include<stdio.h>
int main(){
    int a[4] = {1,2,3,4} ;
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);

    char arr[5] ={'a','l','t','a','s'};
    //printf("%c",arr[1]);
    return 0;
}
