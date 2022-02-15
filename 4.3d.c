#include<stdio.h>
int main()
{
    unsigned int num;

    num = 1;

    while (num <= 20)
    {
        printf("%u",num);
        if (num % 5 == 0)
            printf("\n");
        else
            printf("\t");
        num ++;
    }
}