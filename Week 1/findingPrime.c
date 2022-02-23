#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    if(n == 1){
        printf("1 is neither prime nor composite \n");
    }
    else if(n == 2){
        printf("it is a prime \n");
    }
    else if(n<1){
        printf("it is zero or negetive \n");
    }
    else{
        char flag = 't';
        for(int i=2;i<n;i++){
            if(n%i == 0){
                flag = 'f';
            }
        }
        if(flag == 't'){
            printf("it is a prime \n");
        }
        else{
            printf("it is not a prime \n");
        }
    }

    return 0;
}