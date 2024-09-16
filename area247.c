#include<stdio.h>
int main(){
int l;
printf("Enter Length:");
scanf("%d",&l);
int b ;
printf("Enter breath:");
scanf("%d",&b);
int a =l*b;
int p =2*(l+b);
if (a>p)
{
    printf("Area is grater than perimetre");

}
else{
    printf("Area is not grater than perimeter");
}

    return 0;
}