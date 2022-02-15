#include<stdio.h>
int main()
{
    unsigned int i, num, fact;

    printf("Number\tFactorial\n");
    printf("1\t1\n");

    for(num = 2; num <= 5; num++){
        fact =  num;
        for(i = 1; i < num; i++){
        fact = fact*(num - i);
        }
        printf("%u\t%u\n", num, fact);
    }
}