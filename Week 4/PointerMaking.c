#include <stdlib.h>
#include <stdio.h>

int main(){

    int a = 100; // declaring a variable
    
    // declaring the pointer
    int* ptr = &a;

    // syntax of defining a pointer is 
    // <data_type>* <variable_name> = &<variable_to_point to>
    
    // so the pointer ptr will be pointing to the address of variable a

    printf("the address of a is %p and the address pointer is pointing to is %p",(void*)&a,ptr);

    // pointer is pointing to the address of the variable

    return 0;
}