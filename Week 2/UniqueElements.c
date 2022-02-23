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
        int* arr = (int*) malloc(n*sizeof(int));

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if(count == 1){
                printf("%d ",arr[i]);
            }
        }

        free(arr);
    }

    return 0;
}