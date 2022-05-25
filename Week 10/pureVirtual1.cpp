#include <bits/stdc++.h>

using namespace std;

class A{
    public:
        virtual void f() = 0; // pure virtual functions -> virtual functions with 0 body
};

class B:public A{
    public:
        void f(){
            cout<<"this is class B"<<endl;
        }
};

class C:public B{
    public:
        void f(){
            cout<<"this is class C"<<endl;
        }
};

int main(){

    C obj1,*ptr;
    ptr = &obj1;

    return 0;
}