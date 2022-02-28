#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,m;
    printf("input n and m ");
    scanf("%d %d",&n,&m);

    // creating the matrix

    int a[n][m],b[n][m];

    printf("input matrix a \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("input matrix b \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }

    // making the new matrix
    int add[n][m],sub[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // printing the add and sub
    printf("the addition of matrix is \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",add[i][j]);
        }printf("\n");
    }

    printf("the subtraction of the matrix is \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",sub[i][j]);
        }printf("\n");
    }

    return 0;
}