// given n
// make a pattern like this

// 4 4 4 4 4 4 4  
// 4 3 3 3 3 3 4   
// 4 3 2 2 2 3 4   
// 4 3 2 1 2 3 4   
// 4 3 2 2 2 3 4   
// 4 3 3 3 3 3 4   
// 4 4 4 4 4 4 4   

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    // printing the pattern

    // upper half of the pattern

    int arr[n+1][n];

    for(int i=n;i>0;i--){

        int j;
        int count = 0;

        for(j=n;j>=i;j--,count++){
            arr[i][count] = j;
        }

        j++;

        for(;count<n;count++){
            arr[i][count] = j;
        }

        for(count = 0;count<n;count++){
            printf("%d ",arr[i][count]);
        }

        for(count=n-2;count>=0;count--){
            printf("%d ",arr[i][count]);
        }

        printf("\n");
    }

    // lower half of the pattern

    for(int i=2;i<n+1;i++){
        for(int count = 0;count<n;count++){
            printf("%d ",arr[i][count]);
        }
        for(int count = n-2;count>=0;count--){
            printf("%d ",arr[i][count]);
        }
        printf("\n");
    }

    return 0;
}