// Description
// Write a C++  program to enter month number and print number of days in month. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.
// Boundary Condition:
// month = 1 to 12

// Input Format:
// The first line contains the month (integer)

// Output Format:
// The first line contains the no. of days or invalid

// Example Input/Output 1:
// Input:
// 1

// Output:
// 31 days

// Example Input/Output 2:
// Input:
// 13

// Output:
// invalid

// Example Input/Output 3:
// Input:
// -2

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 2

// Output:
// 28 days

#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    if(n<1 || n>12){
        cout<<"invalid";
    }
    else{
        if(n == 2){
            cout<<"28 days"<<endl;
        }
        else if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
            cout<<"31 days"<<endl;
        }
        else{
            cout<<"30 days"<<endl;
        }
    }
    
    return 0;
}