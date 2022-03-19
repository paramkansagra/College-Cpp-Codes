#include <stdio.h>
#include <stdlib.h>

void sort(int* arr,int n){
    // start from i = 1 then take the element and find the particular position for it
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

    return 0;
}