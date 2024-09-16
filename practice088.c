#include<stdio.h>
int main(){
    int sum = 0;
    int i = 0;
    while (i <= 10)
    {
        sum += i; // Corrected this line to add i to sum
        i++;
    }
    
    printf("The sum of numbers from 0 to 10 is: %d\n", sum);
     // Add a print statement to display the result

    return 0;
}
