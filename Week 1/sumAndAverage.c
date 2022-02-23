#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int sum = 0;
    if(n<0){
        for(int i=0;i>=n;i--){
            sum += i;
        }
    }
    else{
        for(int i=0;i<=n;i++){
            sum += i;
        }
    }

    printf("the sum is %d \n",sum);

    int avg = sum / n;
    printf("the average is %d \n",avg);

    return 0;
}