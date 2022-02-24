#include <stdio.h>
#include <stdlib.h>

int main(){

    // print the fibbonacci sequence till a given number
    int n;
    printf("input n ");
    scanf("%d",&n);

    // now print it
    int a = 0,b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        int temp = a;
        a = b;
        b = b + temp;
    }

    return 0;
}