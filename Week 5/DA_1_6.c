#include <stdio.h>
#include <stdlib.h>
int main(){

    float n;
    printf("input the magnitude ");
    scanf("%f",&n);

    if(n<5.0){
        printf("Little to no damage\n");
    }
    else if(n>=5.0 && n<5.5){
        printf("Some damage\n");
    }
    else if(n>=5.5 && n<6.5){
        printf("Serious damage : walls may crack and fall \n");
    }
    else if(n>=6.5 && n<7.5){
        printf("Disaster: houses and buildings may collaps\n");
    }
    else{
        printf("Catastrophic: most buildings destroye\n");
    }

    return 0;
}