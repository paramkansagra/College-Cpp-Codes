#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid input \n");
    }
    else{
        // method 1 loops
        int sum = 0;
        for(int i=1;i<n+1;i++) sum += i;

        printf("the sum is %d \n",sum);

        // method 2 mathematical way
        // sum = (n)*(n+1)/2;
        // printf("the sum is %d",sum);
    }

    return 0;
}