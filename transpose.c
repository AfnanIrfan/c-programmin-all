//Q Write a programe to print the transpose of the matrix entered by the user(leetcode867)
#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of colums : ");
    scanf("%d",&c);
    printf("Enter all the elements\n");
    int arr[r][c];   //r*c total elements
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    // 1 2 3
    //4 5 6

    // 1 4
    //2 5
    //3 6
    int brr[c][r];
    printf("\n");
    for(int i=0;i<c;i++){ // c = 3 r=2
        for(int j=0;j<r;j++){
           // printf("%d ",arr[j][i]);
           brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    // printing brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}