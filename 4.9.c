#include<stdio.h>
int main()
{
    int counter,num1, num;
    float avg, sum;

    sum = 0;

    printf("Enter the number of your numbers:");
    scanf("%d",&num1);

    for(counter = 0; counter < num1; counter ++){
        printf("Enter the integer to be summed:");
        scanf("%d",&num);
        sum += num;
        num = 0;
    }
        avg = (sum / num1);
        printf("The sum of your sequence is %.2f\n",sum);
        printf("The average of your sequence is %.2f",avg);
}
