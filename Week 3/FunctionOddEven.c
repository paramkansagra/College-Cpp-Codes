#include <stdio.h>
#include <stdlib.h>

// declaring the function
int oddEven(int b){
    return b&1;
}

int main(){

    int n;
    printf("input the number of queries ");
    scanf("%d",&n);

    // going for a for loop for the queries
    for(int i=0;i<n;i++){
        int b;
        printf("input the number ");
        scanf("%d",&b);

        // call the function
        if(oddEven(b) == 1){
            printf("it is odd \n");
        }
        else{
            printf("it is even \n");
        }
    }

    return 0;
}