#include <stdio.h>
#include <stdlib.h>

int main(){

    // making a simple calculator using switch statement

    int a,b;
    char c;

    printf("input number A and B ");
    scanf("%d %d",&a,&b);

    printf("input the operation(input the sign) ");
    scanf(" %c",&c);

    switch (c)
    {
    case '+':
        printf("%d  + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %f",a,b,(float)a/b);
        break;
    case '%':
        printf("%d %% %d = %d",a,b,a%b);
        break;
    default:
        printf("invalid operation");
        break;
    }

    return 0;
}