#include <stdio.h>
#include <stdlib.h>

// declaring the function
void sum(int n,int m){
    printf("the sum of %d and %d is %d \n",n,m,n+m);
}

// declaring the function
void sub(int n,int m){
    printf("the subtraction of %d from %d is %d \n",m,n,n-m);
}

// declaring the function
void mult(int n,int m){
    printf("the multiplication of %d and %d is %d\n",n,m,n*m);
}

// declaring the function
void divi(int n,int m){
    printf("the division of %n by %d is %f \n",n,m,(float)n/m);
}

// declaring the function
void mod(int n,int m){
    printf("the remainder when %d is %d is %d \n",n,m,n%m);
}

int main(){

    // take 2 numbers and then make a function to find the sum sub mult and div and mod for the same

    // input the numbers
    int n,m;
    printf("input n and m ");
    scanf("%d %d",&n,&m);

    // calling the functions
    sum(n,m);
    sub(n,m);
    mult(n,m);
    divi(n,m);
    mod(n,m);

    return 0;
}