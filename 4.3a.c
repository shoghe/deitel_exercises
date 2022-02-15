#include<stdio.h>
int main()
{
    unsigned int count,sum;

    sum = 0;

    for (count = 1; count < 100; count += 2){
        sum += count;
    }
    printf("The sum of the odd integers 1 to 99 is %u", sum);
}