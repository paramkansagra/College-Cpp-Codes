#include <stdio.h>

int main(){

    printf("enter a char int int \n");

    char ch;
    int a,b;

    scanf("%c %d %d ",&ch,&a,&b);

    printf("%c ",ch);

    int sum = a + b;
    int sub = a - b;

    printf("sum=%d sub=%d",sum,sub);

    return 0;
}