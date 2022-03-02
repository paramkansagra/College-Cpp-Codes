#include <stdio.h>
#include <stdlib.h>

long long int fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    // call the function
    printf("%lli",fact(n));

    return 0;
}