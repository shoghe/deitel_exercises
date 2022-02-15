#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three nonzero integers here:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        if(a*a==(b*b+c*c))
            printf("We can have a  rightangle with this sides.");
            else
                printf("Sorry:We can't have a rightangle with this sides.");
    }
    else   if(b>a && b>c)
        {
            if(b*b==(a*a+c*c))
                printf("We can have a  rightangle with this sides.");
                else
                    printf("Sorry:We can't have a rightangle with this sides.");
        }
    else   if(c>b && c>a)
        {
            if(c*c==(a*a+b*b))
                printf("We can have a rightangle with this sides.");
                else
                    printf("Sorry:We can't have a rightangle with this sides.");
        }
}