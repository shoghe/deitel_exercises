#include<stdio.h>
int main()
{
    int num,old_num;
    int a,b,c,d,a1,b1;

    printf("Enter the encryped number here(four-digit)here:");
    scanf("%d", &num);

    a = num /1000;
    b = (num - a*1000) / 100;
    c = ((num - a*1000) - b*100) / 10;
    d = ((num - a*1000) - b*100) - c*10;
    a1 = a;
    b1 = b;
    a = c;
    b = d;
    c = a1;
    d = b1;
    a = (a + 10) - 7;
    b = (b + 10) - 7;
    c = (c + 10) - 7;
    d = (d + 10) - 7;
    old_num = a*1000 + b*100 + c*10 + d;
    printf("%d", old_num);
}