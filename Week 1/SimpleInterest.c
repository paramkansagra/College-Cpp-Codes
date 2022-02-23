#include <stdio.h>

int main(){

    int principle,years,rate;

    scanf("%d",&principle);
    scanf("%d",&years);
    scanf("%d",&rate);

    float interest = principle * years * rate;

    printf("the interest is %f",interest);

    return 0;
}