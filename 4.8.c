#include<stdio.h>
int main()
{
    int x, i, j;

    printf("Enter the integer between 1 and 20,here:");
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        for(j = 1; j <= x; j++){
            if(i == j)
                printf("@");
                else
                    printf(" ");
        }
        printf("\n");
    }
}