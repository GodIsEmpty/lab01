#include <stdio.h>

int main(void) {

    int dollars;
    int number;
    printf("Enter a dollar amount:");
    scanf("%d",&dollars);
    number = dollars/20;
    printf("\n$20 bills:%d",number);
    dollars = dollars - (20*number);
    number = (dollars)/10;
    printf("\n$10 bills:%d",number);
    dollars = dollars - (10*number);
    number = dollars/5;
    printf("\n$5 bills:%d",number);
    dollars = dollars - (5*number);
    number = dollars/1;
    printf("\n$1 bills:%d",number);
    return 0;
}


    
