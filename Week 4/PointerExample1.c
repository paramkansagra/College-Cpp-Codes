#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input the value of n ");
    scanf("%d",&n);

    // we took input of the variable and then will make a pointer
    int* ptr = &n;

    // printing the address of pointer n and the value of n 
    printf("the address of n is %p the address ptr is pointing to is %p and the address of ptr is %p \n",(void*)&n,ptr,(void*)&ptr);


    // we can get the value of the address the pointer is holding by *pointer
    
    printf("the value of n is %d and thru pointer is %d \n",n,*ptr);

    return 0;
}