#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float n,m;
    printf("input n and m ");
    scanf("%f %f",&n,&m);

    float* num1 = &n; // stores the address of n
    float* num2 = &m; // stores the address of m

    float sum = *num1 + *num2; // gets the integer using defrence(*) operator
    float sub = *num1 - *num2;
    float mult = (*num1)*(*num2);
    float div = (*num1)/(*num2);

    printf("the sum is %f\n the subtraction is %f\n the multiplication is %f\n the division is %f\n",sum,sub,mult,div);

    return 0;
}