#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){ // for(int i=min(a,b);i>=1;i--){}    break; ye coprime k liye 
        if(a%i==0 && b%i==0){ // for(int i=1;i<=min(a,b);i++)
            hcf = i;
            break;
        }

    }
    return hcf;

}
int main(){
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int hcf =gcd(a,b);
    printf("the HCF/GCD of %d and %d is : %d",a,b,hcf);
}