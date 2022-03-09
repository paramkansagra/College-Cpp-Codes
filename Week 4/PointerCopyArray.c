#include <stdio.h>
#include <stdlib.h>

void printArr(int* ptr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }printf("\n");
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n],final[n];

    int* strtptr1 = arr;
    int* strtptr2 = final;
    for(int i=0;i<n;i++){
        scanf("%d",(strtptr1+i));
    }
    printf("array 1 = ");
    printArr(strtptr1,n);

    for(int i=0;i<n;i++){
        *(strtptr2 + i) = *(strtptr1 + i);
    }
    printf("array 2 = ");
    printArr(strtptr2,n);

    return 0;
}