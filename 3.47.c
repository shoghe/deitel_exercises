#include<stdio.h>
int main()
{
    int day, mounth, year;
    int day1, mounth1, year1;
    int age;
    int max_heart_rate;
    float target1,target2;

    printf("Enter date of your birthday here(day.mounth.year):");
    scanf("%d.%d.%d",&day,&mounth,&year);
    printf("Enter the current day here(day.mounth.year):");
    scanf("%d.%d.%d",&day1,&mounth1,&year1);

    if (mounth1 > mounth)
        age = (year1 - year);
        else if (mounth1 < mounth)
            age = (year1 - year) - 1;
            else if (mounth1 == mounth)
                {
                    if (day1 >= day)
                        age = (year1 - year);
                        else
                            age = (year1 - year) - 1;
                }
    max_heart_rate = (220 - age);
    target1 = (max_heart_rate * 0.5);
    target2 = (max_heart_rate * 0.85);
    printf("Your age is - %d\n", age);
    printf("Your maximum heart rate in beats per minute is - %d\n", max_heart_rate);
    printf("Your target heart rate is  %f - %f\n",target1, target2);
}