#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int sum = 0;
    while(n != 0){
        sum += n--;
    }

    printf("sum = %d",sum);

    return 0;
}