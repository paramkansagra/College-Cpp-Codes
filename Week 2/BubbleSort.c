#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid \n");
    }
    else{

        // dynamic array
        int* arr = (int*)malloc(n*sizeof(int));

        // take the input 
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        // bubble sort
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        // print the array
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }printf("\n");

        // free the array
        free(arr);

    }

    return 0;
}