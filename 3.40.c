#include<stdio.h>
int main()
{
    int i;
    int power;

    i = 1;
    power = 1;

    while(power < 1000)
    {  
        printf("%d ",power);
        power = 3*i;
        i *= 3;
    }
}