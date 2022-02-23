#include <stdio.h>
#include <stdlib.h>

int main(){

    int age;
    scanf("%d",&age);

    if(age>0){
        if(age>=18){
            printf("eligible \n");
        }
        else{
            printf("not eligible \n");
        }
    }
    else{
        printf("invalid \n");
    }

    return 0;
}