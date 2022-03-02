#include <stdlib.h>
#include <stdio.h>

int perfectNumber(int n){
    int total = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            total += i;
        }
    }
    if(total == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int start,end;
    printf("input start and end ");
    scanf("%d %d",&start,&end);

    for(int i=start;i<end+1;i++){
        if(perfectNumber(i) == 1){
            printf("%d ",i);
        }
    }printf("\n");

    return 0;
}