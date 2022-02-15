#include<stdio.h>
int main()
{
    unsigned int num;

    for(num = 1; num <= 20; num ++){
        printf("%u", num);
        if(num % 5 == 0)
            printf("\n");
        else
            printf("\t");
    }
}