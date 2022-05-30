#include <iostream>

using namespace std;

template <class T>
T add(T &a,T &b){
    T result = a+b;
    return result;
}

int main(){

    int i=2,j=3;
    float m = 2.3,n = 1.2;

    cout<<"addition of i and j is :"<<add<int>(i,j)<<endl;
    cout<<"addition of m and n is :"<<add<float>(m,n)<<endl;

    return 0;
}