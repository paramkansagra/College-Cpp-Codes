#include <stdio.h>

int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("it is not a multiple \n");
    }
    else{
        if(b%a == 0){
            printf("it is a multiple \n");
        }
        else{
            printf("it is not a multiple \n");
        }
    }

    return 0;
}