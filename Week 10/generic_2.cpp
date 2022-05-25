#include <bits/stdc++.h>

using namespace std;

template <class T>
class myPair{
    private:
        T values[2];
    public:
        myPair(T first,T second){
            values[0] = first;
            values[1] = second;
            cout<<values[0]<<" "<<values[1]<<endl;
        }
};

int main(){

    myPair<int> a(10,11);
    myPair<float> b(10.32,11.24);
    myPair<string> c("param","kansagra");
    myPair<string> d("vit","chennai");

    return 0;
}