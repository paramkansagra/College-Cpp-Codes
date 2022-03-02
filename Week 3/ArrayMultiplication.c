// Description

// Given the size and array elements, write a program in C to update every array element
// with the multiplication of previous and next numbers in array

// Print ‘invalid’, if the boundary conditions are not met.

// For example, Input
// 6
// 1 2 3 4 5 6

// Output

// 2 3 8 15 24 30

// Explanation:


// Perform element-wise operation,
// Multiply Previous no with next no.2(1*2)3(1*3)8(2*4)15(3*5)24(4*6)30(5*6)

// Boundary Conditions:

// n >= 1

// element > 0

// Input Format

// First-line contains the size of the array.
// The next line contains, space-separated, the elements of the array

// Output Format

// Print the array in such a way that, it updates every array element with the multiplication
// of previous and next numbers in the given array


#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    if(n<1){
        printf("invalid \n");
    }
    else{
        int arr[n];
        int flag = 0;
        for(int i=0;i<n;i++){
            int temp;
            scanf("%d",&temp);
            if(temp>0){
                arr[i] = temp;
            }
            else{
                printf("invalid \n");
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            int final[n];
            for(int i=0;i<n;i++){
                if(i == 0){
                    final[i] = arr[i+1]*arr[i];
                }
                else if(i == n-1){
                    final[i] = arr[i-1]*arr[i];
                }
                else{
                    final[i] = arr[i+1]*arr[i-1];
                }
            }
            for(int i=0;i<n;i++){
                printf("%d ",final[i]);
            }printf("\n");
        }
    }

    return 0;
}