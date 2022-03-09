#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];
    int* ptr = arr;

    for(int i=0;i<n;i++){
        scanf("%d",ptr); // take the input and dump at address held by ptr
        ptr++; // incease the index works as ptr = ptr + 4 as size of int is 4
    }

    ptr = arr;
    for(int i=0;i<n;i++){
        printf("%d ",*ptr); // bring the value and dump in printf
        ptr++; // increase the index
    }

    return 0;
}