#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("invalid");
        exit(1);
    }

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp;
            scanf("%d",&temp);

            if(temp<=0){
                printf("invalid \n");
                exit(1);
            }

            arr[i][j] = temp;
        }
    }

    int count = 0;
    for(int i=0;i<n;i++){
        count += arr[i][i];
    }

    printf("%d",count);

    return 0;
}