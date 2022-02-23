#include <stdio.h>
#include <conio.h>

void main(){
    // read two numbers and print them
    int a,b;
    
    // syntax
    // scanf("%d",&a); read the value and put at address of a

    scanf("%d",&a);
    scanf("%d",&b);

    // now do the the operations

    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    int dev = a/b;

    // print the data
    printf("summation %d subtraction %d multiplication %d division %d",sum,sub,mult,dev);

    // at each %d the value of sum and all is substituted

}