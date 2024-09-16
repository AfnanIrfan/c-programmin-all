#include<stdio.h>
int main(){
   /**
    * /
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i= 1;i<=n;i++)  //ye code m hm user se input le rhe h
                             //ai jaise user agr koi number dalega usko utna print hoke milega
    printf("Hello world\n");/**/

    //for(int i= 1;i<=100;i++)
    //if(i% 2!=0){
         //
         
   // }
  //  int num;
    //    printf("Enter a /n
      //  :");
     //   scanf("%d",&n);
  // for(int i= 1;i<=n;i=i++)
     //printf("%d ",&n);
     

    int num;

    printf("Enter a number to print its multiplication table:\n");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }


 
    return 0;
}