// A13-Q1
// Description

// Write a C++ program that compares the length of two strings that either they are equal or not using the overloaded comparison operator: Print ‘invalid’, if conditions are not met.
// Boundary Condition
// String1 && String2 should be strings

// Input Format
// First line contains the string1
// Next line contains the string2

// Output Format
// First line contains “same length” or “different length” or invalid

// Example Input/Output 1:
// Input:
// abc
// abc

// Output:
// same length

// Example Input/Output 2:
// Input:
// abc
// abcd

// Output:
// different length

// Example Input/Output 3:
// Input:
// abc
// 123

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 123
// abc
 
// Output:
// invalid

#include <iostream>
#include <stdlib.h>

using namespace std;

class compare{
    private:
        string s;
    public:
        void setString(){
            cin>>s;
        }
        string getString(){
            return s;
        }
        int getLength(){
            return s.length();
        }
        
        bool operator == (compare c1){
            if(getLength() == c1.getLength()){
                return true;
            }
            else{
                return false;
            }
        }
};

bool check(string s){
    for(int i=0;i<s.length();i++){
        int x = s[i]-'0';
        if(x>=0 && x<10){
            return true;
        }
    }
    return false;
}

int main(){
    
    compare c1,c2;
    c1.setString();
    c2.setString();
    
    if(check(c1.getString()) || check(c2.getString())){
        cout<<"invalid";
        exit(1);
    }
    
    if(c1 == c2){
        cout<<"same length";
    }
    else{
        cout<<"different length";
    }
    
    return 0;
}