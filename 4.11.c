#include<stdio.h>
int main()
{
    int counter, sum;

    sum = 0;

    printf("The multiples of 7(1-100) are:");
    for(counter = 7; counter <= 100; counter +=7){
            sum += counter;
            printf(" %d ", counter);
    }
        printf("\nThe sum of multiples is: %d", sum);
}