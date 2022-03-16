#include <stdio.h>
#include <stdlib.h>

void find_sum(int* arr,int n,int* ptr){
    for(int i=0;i<n;i++){
        *ptr += *(arr + i);
    }
}

int main(){

    int n;
    printf("input number of elements in the array ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    int* ptr = &sum;
    find_sum(arr,n,ptr);

    printf("sum = %d",*ptr);

    return 0;
}