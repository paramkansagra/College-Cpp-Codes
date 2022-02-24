#include <stdio.h>
#include <stdlib.h>

int main(){

    // finding the factorial of the number
    int n;
    printf("input n ");
    scanf("%d",&n);

    // finding the factorial using for loop
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }

    // printing the factorial
    printf("factorial = %d",fact);

    return 0;
}