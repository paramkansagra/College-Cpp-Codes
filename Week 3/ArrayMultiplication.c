#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<1){
        printf("invalid \n");
    }
    else{
        int arr[n];
        int flag = 0;
        for(int i=0;i<n;i++){
            int temp;
            scanf("%d",&temp);
            if(temp>0){
                arr[i] = temp;
            }
            else{
                printf("invalid \n");
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            int final[n];
            for(int i=0;i<n;i++){
                if(i == 0){
                    final[i] = arr[i+1]*arr[i];
                }
                else if(i == n-1){
                    final[i] = arr[i-1]*arr[i];
                }
                else{
                    final[i] = arr[i+1]*arr[i-1];
                }
            }
            for(int i=0;i<n;i++){
                printf("%d ",final[i]);
            }printf("\n");
        }
    }

    return 0;
}