// Description

// Given the size and array elements, write a program in C to rearrange an array in such 
// an order that–

// smallest, largest, 2nd smallest, 2nd largest and on. 

// Print ‘invalid’, if the boundary conditions are not met.

// Boundary Conditions:

// n > 0

// element > 0

// Input Format

// First-line contains the size of the array.
// The next line contains, space-separated, the elements of the array

// Output Format

// Print the array in such an order that–

// smallest, largest, 2nd smallest, 2nd largest and so on.


#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<1){
        printf("invalid \n");
        exit(1);
    }

    // create the array and take input
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp<=0){
            printf("invalid \n");
            exit(1);
        }
        
        arr[i] = temp;
    }

    // now sort the arraay
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // now use 2 pointer approch to print the array
    int i = 0;
    int j = n-1;
    int count = 0;

    while(count != n){
        if(count&1){
            printf("%d ",arr[j--]);
        }
        else{
            printf("%d ",arr[i++]);
        }
        count++;
    }printf("\n");
    

    return 0;
}