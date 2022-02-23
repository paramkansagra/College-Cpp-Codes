#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n<=1){
        printf("it is not prime \n");
    }
    else{
        char flag = 't';
        if(n == 2){
            printf("it is a prime number");
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i == 0){
                    flag = 'f';
                    break;
                }
            }
            if(flag == 't'){
                printf("it is a prime number \n");
            }
            else{
                printf("it is not a prime number \n");
            }
        }
    }

    return 0;
}