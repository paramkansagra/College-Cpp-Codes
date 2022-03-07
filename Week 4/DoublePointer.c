#include <stdlib.h>
#include <stdio.h>

int main(){
    int data;
    printf("input data ");
    scanf("%d",&data);
    
    int* ptrint = &data;
    int** ptrintptr = &ptrint;

    printf("the add of data is %p and ptrint is pointing to %p and ptrintptr is holding %p \n",(void*)&data,ptrint,*ptrintptr);

    // increasing value
    data++;
    *ptrint += 1;
    **ptrintptr += 1;

    printf("new value of data is %d \n",data);

    return 0;
}