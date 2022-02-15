#include<stdio.h>
int main()
{
    float fah;
    int cel;

    fah = 0;

    printf("Cesius\tFahrenheit\n");
    for(cel = 30; cel <= 50; cel++){
        fah = 1.8*cel + 32;
        printf("%d\t%.2f\n", cel, fah);
    }
}