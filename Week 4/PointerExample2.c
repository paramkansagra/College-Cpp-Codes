#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 10;
    int* ptr = &num;

    printf("the address of num is %p\n",(void*)&num);
    printf("the value of nums is %d\n",num);

    printf("the address of ptr is %p\n",(void*)&ptr);
    printf("the value in ptr is %p\n",ptr);
    printf("the value pointed by ptr is %d\n",*ptr);

    return 0;
}