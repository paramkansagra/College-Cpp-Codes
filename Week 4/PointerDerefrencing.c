#include <stdio.h>
#include <stdlib.h>

int main(){

    // initilizing the value
    int a,b;

    // making the pointer
    int* ptr = &a;

    // giving value thru ptr
    *ptr = 25; // the value of 25 is given to a

    // reinitilize ptr to b 
    ptr = &b;

    // giving value to b
    *ptr = 10;

    // printing the values
    printf("the value of a is %d and b is %d \n",a,b);

    // we can also increase the value of the variables thru ptr
    *ptr += 10; // increase the value of b by 10
    
    printf("the value of a is %d and b is %d \n",a,b);

    // we are type casting the value of the pointer to integer for our benifit
    printf("the value thru the pointer is %d",*(int*)ptr);

    return 0;
}