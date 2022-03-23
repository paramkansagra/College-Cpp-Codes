#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<=0 || n>30){
        printf("invalid\n");
        exit(1);
    }

    int a = 1;
    int b = 1;

    for(int i=2;i<n;i++){
        if(i%2 == 1){
            b = b * 3;
        }
        else{
            a = a * 2;
        }
    }

    if(n%2 == 0){
        printf("%d\n",b);
    }
    else{
        printf("%d\n",a);
    }

    return 0;
}