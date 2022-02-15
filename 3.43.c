#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three nonzero integers here:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        if(a<b+c)
            printf("We can have a triangle with this sides.");
            else
                printf("Sorry:We cat have a triangle with this sides.");
    }
    else   if(b>a && b>c)
        {
            if(b<a+c)
                printf("We can have a triangle with this sides.");
                else
                    printf("Sorry:We cat have a triangle with this sides.");
        }
    else   if(c>b && c>a)
        {
            if(c<a+b)
                printf("We can have a triangle with this sides.");
                else
                    printf("Sorry:We can't have a triangle with this sides.");
        }
}