#include<stdio.h>
int main()
{
    int input, num, sum, sum_sqr, sum_cub;

    sum = 0;
    sum_sqr = 0;
    sum_cub = 0;

    printf("Enter the natural number:");
    scanf("%d", &input);
    for (num = 1; num <= input; num ++){
        sum += num;
        sum_sqr += num*num;
        sum_cub += (num*num*num);
    }
    printf("The sum of natural numbers(1 to %d) is %d\n", input, sum);
    printf("The sum of natural numbers' squares(1 to %d) is %d\n", input, sum_sqr);
    printf("The sum of natural numbers' cubes(1 to %d) is %d\n", input, sum_cub);
}