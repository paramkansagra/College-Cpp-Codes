#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a>=90){
        printf("s grade");
    }
    else if(a>=80 && a<90){
        printf("a grade");
    }
    else if(a<80 && a>=70){
        printf("b grade");
    }
    else{
        printf("fail");
    }

    return 0;
}