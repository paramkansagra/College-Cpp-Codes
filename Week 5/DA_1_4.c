#include <stdio.h>
#include <stdlib.h>

int main(){

    int joining_date;
    printf("input the joining date ");
    scanf("%d",&joining_date);

    if(joining_date<1 || joining_date >31){
        printf("invalid\n");
        exit(1);
    }

    float count = 0;

    for(int i=0;i<30;i++){
        count += joining_date;
        joining_date *= 2;
    }

    printf("the total pay is %.0f \n",count);

    return 0;
}