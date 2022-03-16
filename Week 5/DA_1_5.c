#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input the number of elements in the array ");
    scanf("%d",&n);

    int arr[n];
    printf("input the elements in the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    printf("the sorted array is ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

    return 0;
}