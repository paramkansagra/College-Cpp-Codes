#include <stdio.h>
#include <stdlib.h>

void sort(int* arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];

    printf("input the array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

    return 0;
}