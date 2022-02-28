#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // finding the average
    int avg = 0;
    for(int i=0;i<n;i++){
        avg += arr[i];
    }
    
    avg = avg / n;

    // printing the diffrence
    for(int i=0;i<n;i++){
        printf("%d ",abs(avg-arr[i]));
    }printf("\n");

    return 0;
}