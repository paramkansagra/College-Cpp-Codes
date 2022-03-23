#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gp1(int n){
    return pow(2,n-1);
}

int gp2(int n){
    return pow(3,n-1);
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    if(n<0 || n>30){
        printf("invalid\n");
        exit(1);
    }
    
    int result;
    if(n%2 == 1){
        result = gp1(n/2 +1 );
    }
    else{
        result = gp2((n/2));
    }
    
    printf("%d\n",result);
    
    return 0;
}