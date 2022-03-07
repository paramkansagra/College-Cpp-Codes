#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p,*q;
    float *f,*g;

    q = p + 1;
    g = f + 1;

    printf("%d \n",q-p); // address diffrence
    printf("%d \n",g-f); // address diffrence

    return 0;
}