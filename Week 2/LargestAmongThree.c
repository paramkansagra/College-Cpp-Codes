#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("input the three numbers ");
    scanf("%d %d %d",&a,&b,&c);

    int max;

    if(a>b && a>c){
        max = a;
    }
    if(b>a && b>c){
        max = b;
    }
    if(c>a && c>b){
        max = c;
    }

    printf("max element is %d",max);

    return 0;
}