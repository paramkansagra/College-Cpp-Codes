// A10Q1
// Description
// Write a C++  program using a class having two private variables such as length, breadth and one member function area() which will return the area of the rectangle.. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.

// Boundary Condition:
// length, breadth >0

// Input Format:
// The first line contains the length (integer)
// The first line contains the breadth (integer)

// Output Format:
// The first line contains the area(integer) or invalid

// Example Input/Output 1:
// Input:
// 5
// 2

// Output:
// 10

// Example Input/Output 2:
// Input:
// 5
// -2

// Output:
// invalid

// Example Input/Output 3:
// Input:
// -2

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 20
// 10

// Output:
// 200

#include <iostream>
#include <stdlib.h>

using namespace std;

class rectangle{
    private:
        int length,bredth;
    public:
        void setLength(int l){
            length = l;
        }
        
        void setBredth(int b){
            bredth = b;
        }
        
        int getArea(){
            return length*bredth;
        }
};

void invalid(){
    cout<<"invalid"<<endl;
    exit(1);
}

int main(){
    rectangle r;
    
    int l,b;
    
    cin>>l;
    if(l<=0){
        invalid();
    }
    
    cin>>b;
    if(b<=0){
        invalid();
    }
    
    r.setLength(l);
    r.setBredth(b);
    
    cout<<r.getArea()<<endl;
    
    return 0;
}