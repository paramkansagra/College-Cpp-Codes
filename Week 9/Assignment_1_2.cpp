// A13-Q2
// Description

// Write a C++ program that performs arithmetic operation on a rational expression using Operator Overloading . A rational expression an algebraic expression of the form f(x) / g(x) in which the numerator or denominator are polynomials, or both the numerator and the numerator are polynomials.
// Boundary Condition
// Denominator != 0

// Input Format
// First line contains the numerator part of the rational no-1
// Next line contains the denominator part of the rational no-1
// Next line contains the numerator part of the rational no-2
// Next line contains the denominator part of the rational no-2
 
// Output Format
// First line contains contains numerator (after addition )
// Next line contains denominator
// Next line contains numerator (after subtraction)
// Next line contains denominator
// Next line contains numerator (after multiplication)
// Next line contains denominator
// Next line contains numerator (after division)
// Next line contains denominator
// or invalid

// Example Input/Output 1:
// Input:
// 12
// 6
// 14
// 7

// Output:
// numerator:168
// denominator:42
// numerator:0
// denominator:42
// numerator:168
// denominator:42
// numerator:84
// denominator:84

// Example Input/Output 2:
// Input:
// 30
// 5
// 20
// 0

// Output:
// invalid

// Example Input/Output 3:
// Input:
// 22
// 0

// Output:
// invalid

// Example Input/Output 4:
// Input:
// 1200
// 3
// 345
// 5

// Output:
// numerator:7035
// denominator:15
// numerator:4965
// denominator:15
// numerator:414000
// denominator:15
// numerator:6000
// denominator:1035

#include <iostream>
#include <stdlib.h>

using namespace std;

void print(int n,int d){
    cout<<"numerator:"<<n<<endl;
    cout<<"denominator:"<<d<<endl;
}

void invalid(){
    cout<<"invalid";
    exit(1);
}

void check(int n){
    if(n<=0){
        invalid();
    }
}

class numbers{
    
    private:
        int num,den;
    
    public:
        void setNum(){
            cin>>num;
        }

        void setDen(){
            cin>>den;
            check(den);
        }

        int getNum(){
            return num;
        }

        int getDen(){
            return den;
        }

        void operator +(numbers n1){
            int n = num*n1.getDen()+den*n1.getNum();
            int d = den*n1.getDen();
            print(n,d);
        }

        void operator -(numbers n1){
            int n = num*n1.getNum()-den*n1.getDen();
            int d = den*n1.getDen();
            print(n,d);
        }

        void operator *(numbers n1){
            int n = num*n1.getNum();
            int d = num*n1.getDen();
            print(n,d);
        }

        void operator /(numbers n1){
            int n=num*n1.getDen();
            int d = den*n1.getNum();
            print(n,d);
        }
};

int main(){

    numbers n1,n2;
    n1.getNum();
    n1.getDen();
    n2.getNum();
    n2.getDen();

    n1+n2;
    n1-n2;
    n1*n2;
    n1/n2;

    return 0;
}