#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }

    printf("this is the factorial %d",factorial);

    return 0;
}