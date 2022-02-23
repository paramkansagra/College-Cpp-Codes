#include <stdio.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int data = n;
    int sum = 0;
    if(data%100 != 0){
        for(int i=0;i<3;i++){
            int temp = data%10;
            data = data/10;
            sum += (temp*temp*temp);
        }
        if(sum == n){
            printf("it is a armstrong number \n");
        }
        else{
            printf("it is not a armstrong number \n");
        }
    }
    else{
        printf("it is not a armstrong number \n");
    }

    return 0;
}