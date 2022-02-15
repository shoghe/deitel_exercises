#include<stdio.h>
int main()
{
    float radius;
    double area,lenght,diameter;
    float p;

    printf("Enter the radius of the circle here:");
    scanf("%f",&radius);

    p = 3,14159;
    area = p*radius*radius;
    lenght = 2*p*radius;
    diameter = 2*radius;

    printf("The diameter is equal to %f\n",diameter);
    printf("The lenght is equal to %f\n",lenght);
    printf("The area is equal to %f\n",area);
}