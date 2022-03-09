#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];
    int* ptr = arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    // reverse the array
    int * ptrb = &arr[n-1];
    for(int i=0;i<n/2;i++){
        int temp = *ptr;
        *ptr = *ptrb;
        *ptrb = temp;
        ptr++;
        ptrb--;
    }

    // print after
    ptr = arr;
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }printf("\n");

    return 0;
}