#include<stdio.h>
int main()
{
    int num;

    printf("The prime numbers in this range(1-100) are:2 3 5 7 ");
    for(num = 7; num <= 100; num ++){
        if(num % 2 != 0 && num %3 != 0 && num % 5 != 0 && num % 7 != 0)
            printf("%d ",num);
    }
}