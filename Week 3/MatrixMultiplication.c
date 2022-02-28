#include <stdlib.h>
#include <stdio.h>

int main(){

    int a,b,c;
    printf("input a , b , c");
    scanf("%d %d %d",&a,&b,&c);

    // make the matrix
    int matrix1[a][b],matrix2[b][c];

    // take input of the matrix
    printf("input matrix 1 \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("input matrix 2 \n");
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    // multiply the matrix
    int matrix3[a][c];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int sum = 0;
            for(int k=0;k<c;k++){
                sum += matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j] = sum;
        }
    }

    printf("matrix 3 \n");

    // print the result
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            printf("%d ",matrix3[i][j]);
        }printf("\n");
    }

    return 0;
}