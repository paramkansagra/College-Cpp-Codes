// A9-Q2
// Description
// Write a C++  program to count total duplicate elements in an array. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.
// Boundary Condition:
// Size, elements >0

// Input Format:
// The first line contains size of the array
// The next line contains array elements

// Output Format:
// The first line contains the count of duplicate elements or invalid

// Example Input/Output 1:
// Input:
// 6
// 1
// 1
// 2
// 2
// 3
// 3

// Output:
// 3

// Example Input/Output 2:
// Input:
// 5
// 1
// 0

// Output:
// invalid

// Example Input/Output 3:
// Input:
// -2

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 5
// 1
// 2
// 3
// 4
// 5

// Output:
// 0

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    if(n<=0){
        cout<<"invalid"<<endl;
        exit(1);
    }
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=0){
            cout<<"invalid"<<endl;
            exit(1);
        }
    }
    
    int count = 0;
    int masterIndex = 0;
    int unique[n];
    
    for(int i=0;i<n;i++){
        bool check = false;
        for(int j=0;j<masterIndex;j++){
            if(arr[i] == unique[j]){
                check = true;
            }
        }
        if(check){
            count++;
        }
        else{
            unique[masterIndex++] = arr[i];
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}