#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("invalid \n");
    }
    else{
        for(int i=1;i<n+1;i++){
            int start = i%2;
            for(int j=0;j<i;j++){
                printf("%d",start);
                if(start == 1){
                    start = 0;
                }
                else{
                    start = 1;
                }
            }printf("\n");
        }
    }

    return 0;
}