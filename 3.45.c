#include<stdio.h>
int main()
{
    int n;
    int f;
    int i;

    i = 1;
    

    printf("Enter the nonzero integer here: ");
    scanf("%d",&n);

    if(n==0)
        f = 1;
    else
    {
        f = n;

    while(i<n)
    {
        f = f*(n-i);
        i +=1;
    }
    }
    printf("The factorial of your number is %d",f);
}