#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    printf("input the number of elements in the array ");
    scanf("%d",&n);
    
    int arr[n];
    printf("input the array elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int search;
    printf("input the element to be searched ");
    scanf("%d",&search);

    int found = 0;
    for(int i=0;i<n;i++){
        if(search == arr[i]){
            found = 1;
            printf("Element found at position %d\n",i+1);
        }
    }

    if(found == 0){
        printf("Element not found\n");
    }

    return 0;
}