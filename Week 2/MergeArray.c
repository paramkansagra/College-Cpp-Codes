#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,m;
    printf("input n and m ");
    scanf("%d %d",&n,&m);

    if(n != m || n<=0){
        printf("invalid \n");
    }

    else{
        
        // make dynamic array
        int* arr = (int*)malloc(n*2*sizeof(int));

        // take input
        for(int i=0;i<n*2;i++){
            scanf("%d",&arr[i]);
        }

        // bubble sort
        for(int i=0;i<n*2;i++){
            for(int j=0;j<n*2-1;j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        // print the array
        for(int i=0;i<n*2;i++){
            printf("%d ",arr[i]);
        }printf("\n");

        // free the array
        free(arr);
    }

    return 0;
}