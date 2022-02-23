#include<stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    // making the dynamic array

    int* ptr = (int*)malloc(n*sizeof(int));

    // now the ptr points to the array of length n

    // taking inputs in the array
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    // printing th array
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }printf("\n");

    // delete the array
    free(ptr);

    return 0;
}