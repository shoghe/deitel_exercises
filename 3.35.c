#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    int a,b,c,d,e,dec;

    printf("Enter the binary number(only 0s and 1s): ");
    scanf("%d",&num);

    a = num / 10000;
    b = (num - a*10000)/1000;
    c = ((num - a*10000)- b*1000)/100;
    d = (((num - a*10000)-b*1000)-c*100)/10;
    e = (((num - a*10000)-b*1000)-c*100)-d*10;

    if(num==0)
        dec = num;
        else if(num==1)
            dec = num;

    while(num != 0 )
    {
        num = num / 10;
        count++;
    }
        if(count==2)
            dec = e*1+d*2;
            else if(count==3)
                dec = e*1+d*2+c*4;
                else if(count==4)
                    dec = e*1+d*2+c*4+b*8;
                    else if(count==5)
                        dec = e*1+d*2+c*4+b*8+a*16;
                    
    printf("The decimal of your binary number is- %d",dec);
}