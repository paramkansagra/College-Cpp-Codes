#include <stdlib.h>
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int temp_sum = arr[0];
    int max_sum = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            temp_sum += arr[i];
        }
        else{
            if(temp_sum>max_sum){
                max_sum = temp_sum;
            }
            temp_sum = arr[i];
        }
    }

    if(temp_sum > max_sum){
        max_sum = temp_sum;
    }

    printf("%d",max_sum);

    return 0;
}