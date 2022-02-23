#include <stdio.h>

int main(){

    int n;
    printf("input a number n ");
    scanf("%d",&n);

    if(n<0){
        printf("you gave a negetive number \n");
    }
    else{
        int sum = 0;
        for(int i=0;i<=n;i++){
            sum += i;
        }
        printf("the sum is %d",sum);
    }

    return 0;
}