#include <bits/stdc++.h>

using namespace std;

// template specilization

template <class T>
void fun(T a){
    cout<<"the main function T => "<<a<<endl;
}

// so jab bhi integer dia jayega in the template this function will be called
// else the first template function will be called

template <> // this will be called when a integer will be called
void fun(int a){
    cout<<"specialized template for int type "<<a<<endl;
}

// so this is called a specalied template

int main(){
    
    fun("hello"); // this will go for the first template function
    fun(10); // this will go for the speciaized template function
    fun(10.22); // this will go for the first template function
    
    return 0;
}