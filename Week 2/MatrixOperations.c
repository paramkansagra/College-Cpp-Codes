#include <stdio.h>
#include <stdlib.h>

void rowsum(int** arr,int n,int m){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            count += arr[i][j];
        }
        printf("%d ",count);
    }printf("\n");
}

void colsum(int** arr,int n,int m){
    for(int j=0;j<m;j++){
        int count = 0;
        for(int i=0;i<n;i++){
            count += arr[i][j];
        }
        printf("%d ",count);
    }printf("\n");
} 

void maindiagonal(int** arr,int n,int m){
    int i=0,j=0,count = 0;
    while(i<n && j<m){
        count += arr[i++][j++];
    }
    printf("main diagonal = %d \n",count);
}

void seconddiagonal(int** arr,int n,int m){
    int i=n-1,j=m-1,count=0;
    while(i>=0 && j>=0){
        count += arr[i--][j--];
    }
    printf("second diagonal = %d \n",count);
}

int main(){

    int n,m;
    printf("input n and m ");
    scanf("%d %d",&n,&m);

    // make the dynamic array
    int** arr = (int**)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        arr[i] = (int*)malloc(m*sizeof(int));
    }

    // take input in the array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // find the row sum
    printf("row sum = ");
    rowsum(arr,n,m);
    printf("col sum = ");
    colsum(arr,n,m);
    maindiagonal(arr,n,m);
    seconddiagonal(arr,n,m);

    // clear the array
    for(int i=0;i<n;i++){
        free(arr[i]);
    }

    free(arr);

    return 0;
}
