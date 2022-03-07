#include <stdlib.h>
#include <stdio.h>

int main(){

    int a = 100;
    int b = 200;
    int c = 300;

    // & operator shows the address of the variable

    printf("the address of a is %p and value of a is %d \n",(void*)&a,a);
    printf("the address of b is %p and the value of b is %d \n",(void*)&b,b);
    printf("the address of c is %p and the value of c is %d \n",(void*)&c,c);

    // we are type casting the address to a void* for not making the pointer to point to any mem location

    return 0;
}