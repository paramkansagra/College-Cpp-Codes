#include <stdio.h>
#include <stdlib.h>

void binarySearch(int* arr,int start,int end,int search){
    if(start>end){
        printf("invalid \n");
        return ;
    }
    int mid = start + (end-start)/2;
    int found = 0;
    while(start<=end){
        if(arr[mid] == search){
            found = 1;
            break;
        }
        else if(arr[mid]>search){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    if(found == 1){
        printf("element is found at %d \n",mid+1);
    }
    else{
        printf("element is not found \n");
    }
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    // create dynamic array
    int* arr = (int*)malloc(n*sizeof(int));

    // take the input of the array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // take the search element
    int search;
    printf("input the search element ");
    scanf("%d",&search);

    binarySearch(arr,0,n-1,search);

    // free the mem
    free(arr);

    return 0;
}