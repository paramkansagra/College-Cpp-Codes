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
        int* arr = (int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }

        printf("%d \n",sum);
    }

    return 0;
}