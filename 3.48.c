#include<stdio.h>
int main()
{
    int num,new_num;
    int a,b,c,d,a1,b1;

    printf("Enter the integer here(four-digit number):");
    scanf("%d",&num);

    a = num/1000;
    b = (num - (a*1000)) / 100;
    c = (num - (a*1000) - (b*100)) / 10;
    d = (num - (a*1000) - (b*100) - (c*10));
    
    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;
    a1 = a;
    b1 = b;
    a = c;
    b = d;
    c = a1;
    d = b1;
    new_num = a*1000 + b*100 + c*10 + d;

    printf("%d", new_num);
}