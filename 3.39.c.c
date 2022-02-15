#include<stdio.h>
int main()
{
    int line;
    int column;

    line = 1;
    column = 1;

    while(line<9)
    {
        column = 1;
        while(column<9)
        {
            if(line%2!=0)
                printf("* ");
                else if(line%2==0)
                    printf(" *");
                column++;
        }
        printf("\n");
        line++;
    }
}