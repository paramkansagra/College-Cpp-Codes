#include <stdio.h>
#include <stdlib.h>

void linearSearch(int* arr,int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i] == search){
            printf("element found at %d",i+1);
            return ;
        }
    }
    printf("element not found \n");
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    // make dynamic array
    int* arr = (int*)malloc(n*sizeof(int));

    // take input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // input search element
    int search;
    printf("input the search element ");
    scanf("%d",&search);

    linearSearch(arr,n,search);

    // delete the array
    free(arr);

    return 0;
}