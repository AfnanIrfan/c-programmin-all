#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of Colums : ");
    scanf("%d",&c);
    int arr[r][c]; //r*c total elements
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int arr[3][3] = {{1,2,3},{3,4,5},{4,5,6}};
    // 1 2 3
    // 3 4 5
    // 4 5 6
    for (int i=0;i<3 ;i++){
        for (int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   
 return 0;
}