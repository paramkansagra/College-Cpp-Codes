#include <stdio.h>

int main(){

    int num1,guess,tries= 0;
    printf("input guess number player 1 ");
    scanf("%d",&num1);
    while(num1>100 || num1<0){
        printf("invalid input again ");
        scanf("%d",&num1);
    }

    while(tries<10){
        printf("input number player 2 ");
        scanf("%d",&guess);
        if(guess<num1){
            printf("lower!! \n");
            tries++;
        }
        else if(guess>num1){
            printf("higher!! \n");
            tries++;
        }
        else{
            printf("great \n");
            break;
        }
    }

    if(tries == 10){
        printf("sorry better luck next time");
    }

    return 0;
}