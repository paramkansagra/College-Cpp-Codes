#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n>0){

    // make a dynamic array
    int* arr = (int*)malloc(n*sizeof(int));

    // take the input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n");
    // print in reverse oreder
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }printf("\n");

    // delete the array
    free(arr);

    }
    else{
        printf("invalid \n");
    }
    return 0;
}