#include<stdio.h>
int main()
{
    float population;
    float annual;
    int year;
    float new;

    population = 7.753;
    annual = 1.00;

    printf("Please enter the number of year:");
    scanf("%d",&year);
    while(year<=0)
     {   
        printf("Sorry,but you can put numbers only greater 0:");
        scanf("%d",&year);
     }
    new = ((population * year*annual)/100);

    printf("After %d year world population will increase with %.3f billion",year,new);

}