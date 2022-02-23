#include <stdio.h>
#include <stdlib.h>

int main(){

    int data[][10] = {"0"};

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];
    int i;
    for(i=0;i<n;i = i+1){
        scanf("%d",&arr[i]);
    }

    printf("\n");

    for(i=n-1;i>=0;i=i-1){
        printf("element = %d \n",arr[i]);
    }
    

    return 0;
}