#include<stdio.h>
#include<math.h>
int main()
{
    float num,power;
    int   p;

    num = 2.5;
    p = 3;
    power = pow(num,p);
    printf("%-10.2f\n",power);

}