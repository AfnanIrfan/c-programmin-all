#include<stdio.h>
int main(){
int cp;  //dabba cp lene ka     
printf("Enter cost price:");
scanf("%d",&cp);
int sp; //ye bhe diiba hai
printf("Enter selling price:");
scanf("%d",&sp);
if (sp>cp)
{
    printf("profit");
}
if (sp==cp)
{
    printf("No loss,No profit");
}
    return 0;
}
