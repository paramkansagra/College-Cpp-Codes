#include <stdio.h>
#include <stdlib.h>

void printValue(int* ptr_a,int* ptr_b){
    printf("the value of ptr_a and ptr_b is %d %d \n",*ptr_a,*ptr_b);
}

int main(){

    int a,b;
    printf("input the value of a and b ");
    scanf("%d  %d",&a,&b);

    int* ptr_a = &a;
    int* ptr_b = &b;

    // ptr_a -= ptr_b; // this is illegal 
    // we cant subtact the address

    printValue(ptr_a,ptr_b);
    
    ptr_a = (int*)(ptr_a-ptr_b); // this is valid
    
    printValue(ptr_a,ptr_b);

    //ptr_a = ptr_a + ptr_b - a; // non portable conversion

    printValue(ptr_a,ptr_b);
    
    ptr_a = (int*)(ptr_a - ptr_b) - a; // this is valid
    
    printValue(ptr_a,ptr_b);
    
    ptr_a = ptr_a + a; // memory address increment
    
    printValue(ptr_a,ptr_b);

    // ptr_a = ptr_a + ptr_b // invalid use of  pointer

    return 0;
}