#include <stdio.h>
#include <stdlib.h>

void printValue(int* a,int* b){
    printf("the value of a is %d and value of b is %d \n",*a,*b);
}

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a,b;
    printf("input the value of a and b ");
    scanf("%d %d",&a,&b);

    // print before
    printValue(&a,&b);

    // now swap the value
    swap(&a,&b);

    printValue(&a,&b);

    return 0;
}