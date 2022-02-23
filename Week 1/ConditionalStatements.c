#include <stdio.h>

int main(){
    // read a input and match with the condition
    // if true print something else print something else

    int a;
    scanf("%d",&a); // take a input and put it at the address of a

    // give the contition
    if(a == 10){
        printf("it is equal to 10 \n");
    }
    else{
        printf("it is not equal to 10 \n");
    }

    return 0; // returing for the main functions
}