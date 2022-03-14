// Description
// Write a C program to find maximum and minimum elements in an array using recursion. Print ‘invalid’ and exit, if the boundary conditions are not met.

// Boundary Condition(s):

// Size>0
// Elements >0

// Input Format:

// The first line contains the size of an array/
// The next line contains elements of the array.

// Output Format:

// The first line contains the minimum value of an array.
// The next line contains the maximum value of the array.

// Example Input/Output 1:
// Input:
// 5
// 33 11 99 22 44
// Output:
// 11
// 99
// Example Input/Output 2:
// Input:
// 0
// Output:
// invalid
// Example Input/Output 3:
// Input:
// 5
// -1
// Output:
// invalid
// Example Input/Output 4:
// Input:
// 6
// 7 8 9 3 4 5
// Output:
// 3
// 9

#include <stdio.h>
#include <stdlib.h>

int findMaxx(int arr[],int n,int pos,int maxx){
    if(n == pos){
        return maxx;
    }
    
    if(arr[pos]>maxx){
        maxx = arr[pos];
    }
    
    return findMaxx(arr,n,pos+1,maxx);
}

int findMinn(int arr[],int n,int pos,int minn){
    if(n == pos){
        return minn;
    }
    
    if(arr[pos]<minn){
        minn = arr[pos];
    }
    
    return findMinn(arr,n,pos+1,minn);
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
    
    int maxx = -9999;
    int minn = 9999;
    
    printf("%d\n",findMinn(arr,n,0,minn));
    printf("%d\n",findMaxx(arr,n,0,maxx));
    
    return 0;
}