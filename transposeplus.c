#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows / colums :");
    scanf("%d",&n);
    printf("Enter all the elements\n");
    int arr[n][n]; //n*n total elements 
    // input liya 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose hai
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // swap arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] =arr[j][i];
            arr[j][i] =temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}