#include <stdio.h>
#include <stdlib.h>

long long int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid \n");
    }
    else{
        printf("%lli",fib(n));
    }

    return 0;
}