#include <stdio.h>

int main(){

    int basicPay;

    printf("input the basic pay ");
    scanf("%d",&basicPay);

    int pf = 0.12*basicPay;
    int hra = 0.3*basicPay;
    int da = 0.8*basicPay;

    printf("pf = %d \nhra = %d \nda = %d \n",pf,hra,da);

    int total = basicPay + hra + da - pf;

    printf("the total is %d",total);

    return 0;
}