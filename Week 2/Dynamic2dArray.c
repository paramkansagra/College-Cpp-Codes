#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,m;
    printf("input n and m ");
    scanf("%d %d",&n,&m);

    // making the initial 2 d array
    int** arr = (int**)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        arr[i] = (int*) malloc(n*sizeof(int));
    }

    // take input of the array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // printing the array column wise
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }

    // free the arr
    for(int i=0;i<n;i++){
        free(arr[i]);
    }

    free(arr);

    return 0;
}