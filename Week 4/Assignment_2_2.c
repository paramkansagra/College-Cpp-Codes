#include <stdio.h>
#include <stdlib.h>

int main(){

    float n,discount;
    scanf("%f",&n);

    if(n<1 || n>99999999){
        printf("invalid\n");
        exit(1);
    }

    if(n<=1000){
        discount = n*0.1;
    }
    else{
        discount = 100 + (n-1000)*0.05;
    }

    printf("%.2f",discount);

    return 0;
}