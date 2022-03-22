// Description
// Write a C program to for binary search using recursion. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.

// Boundary Condition:
// Size >0
// Elements >0

// Input Format
// First-line contains array size, a integer number
// Next line contains the elements, in sorted order
// Next line contains the search element

// Output Format
// Print the result as either ‘found’ or ‘not found’ or ‘invalid’

// Sample Testcase Input-1
// 7
// 6
// 11
// 22
// 33
// 44
// 55
// 66
// 22

// Sample Testcase Output-1
// found

// Sample Testcase Input-2
// 5
// 44
// 56
// 78
// 98
// 103
// 22

// Sample Testcase Output-2
// not found

// Sample Testcase Input-3
// 05
// 11
// 22
// 22
// 44
// 55
// 22

// Sample Testcase Output-3
// found

// Sample Testcase Input-4
// 5
// 11
// 22
// -33

// Sample Testcase Output-4
// invalid

// Sample Testcase Input-5
// -1

// Sample Testcase Output-5
// invalid

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool binarySearch(int arr[],int start,int end,int searchElement){
    if(start>end){
        return false;
    }
    
    int mid = start + (end-start)/2;
    if(arr[mid] == searchElement){
        return true;
    }
    else if(arr[mid]>searchElement){
        end = mid -1;
    }
    else{
        start = mid+1;
    }
    
    return binarySearch(arr,start,end,searchElement);
    
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    if(n<=0){
        printf("invalid\n");
        exit(1);
    }
    
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp<=0){
            printf("invalid\n");
            exit(1);
        }
        arr[i] = temp;
    }
    
    int searchElement;
    scanf("%d",&searchElement);
    
    int start = 0;
    int end = n-1;
    
    if(binarySearch(arr,start,end,searchElement)){
        printf("found");
    }
    else{
        printf("not found");
    }
    
    return 0;
}
