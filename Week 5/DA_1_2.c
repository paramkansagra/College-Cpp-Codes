#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int count = 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",count++);
        }printf("\n");
    }
    
    return 0;
}