#include <bits/stdc++.h>

using namespace std;

template <class T>
class A{
    private:
        T a;
    public:
        template <class T2>
        void disp(T2 x){
            a = x;
            cout<<a<<endl;
        }
};

int main(){

    A<int> a; // needed to specify the type for the same
    a.disp(10);

    A<float> b; // need to specify the type of the same
    b.disp(1.1);

    return 0;
}