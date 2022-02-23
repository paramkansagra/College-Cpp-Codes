#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    int roll[n],marks[n];
    for(int i=0;i<n;i++){
        printf("input roll and marks ");
        scanf("%d",&roll[i]);
        scanf("%d",&marks[i]);
    }

    int arr[][5];

    // printing the roll and marks 
    for(int i=0;i<n;i++){
        printf("the roll %d the marks is %d",roll[i],marks[i]);
    }

    return 0;
}