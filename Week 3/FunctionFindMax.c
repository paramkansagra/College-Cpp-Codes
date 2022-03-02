#include <stdlib.h>
#include <stdio.h>

// declaring the function
int findMax(int* arr,int n){
    int maxx = -9999;
    for(int i=0;i<n;i++){
        if(maxx<arr[i]){
            maxx = arr[i];
        }
    }

    return maxx;
}

// declaring the function
int findMin(int* arr,int n){
    int minn = 9999;
    for(int i=0;i<n;i++){
        if(arr[i]<minn){
            minn = arr[i];
        }
    }
    return minn;
}

int main(){

    int n;
    printf("input the number of numbers ");
    scanf("%d",&n);

    // create the array
    int* arr = (int*)malloc(n*sizeof(int));

    // take input of the array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // call the function
    int max = findMax(arr,n);
    int min = findMin(arr,n);

    // printing the function
    printf("the max of the array is %d \n",max);
    printf("the min of the array is %d \n",min);

    // delete the array
    free(arr);

    return 0;
}