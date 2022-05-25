#include <bits/stdc++.h>

using namespace std;

class base{
    public:
        virtual void show(){
            cout<<endl<<"base class"<<endl;
        }
};

class derived:public base{
    public:
        void show(){
            cout<<endl<<"derived class"<<endl;
        }
};

int main(){

    base obj1;
    base* p = &obj1;

    cout<<"P points to "<<p;
    p->show();

    cout<<"P points to drive ";
    derived d1;
    p = &d1;

    p->show();

    return 0;
}