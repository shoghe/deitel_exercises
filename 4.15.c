#include<stdio.h>
#include<math.h>
int main()
{
    double principal;
    int year;
    double rate;
    double amount;

    principal = 1000.00;
    
    printf("Year\t5%%\t\t6%%\t\t7%%\t\t8%%\t\t9%%\n");
    for(year = 1; year <= 10; year++){
        printf("%d",year);
        for(rate = 0.05; rate <= 0.09; rate += 0.01){
        amount = principal * pow(1 + rate,year);
        printf("\t%.2f",amount);
        printf("\t");
        }
       
        printf("\n");
    }
}