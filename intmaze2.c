#include<stdio.h>
int maze2(int n,int m){
    int righWays =0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){ //cannot go down
        rightWays += maze2(n,m-1);
    }
    if(m==1){ // cannot go right
        downWays += maze2(n-1,m); 
    }
    if(n>1 && m>1){
        rightWays += maze2(n,m-1);
        downWays += maze2(n-1,m);
        
    }
    int totalWays = righWays + downWays;
    return totalWays ;
}
  int main() {
    int n, m;

    printf("Enter no of rows of the maze: ");
    scanf("%d", &n);

    printf("Enter no of columns of the maze: ");
    scanf("%d", &m);

    int noOfWays = maze(0, 0, n, m);
    printf("%d", noOfWays);

    return 0;
}

}