#include <bits/stdc++.h>

using namespace std;

class shapes{
    public:
        int dimentions;
        void getDimentition(){
            cin>>this->dimentions;
        }

        virtual void getArea() = 0;
};

class square:public shapes{
    public:
        void getArea(){
            cout<<dimentions*dimentions<<endl;
        }
};

class circle:public shapes{
    public:
        void getArea(){
            cout<<3.14*dimentions*dimentions;
        }
};

int main(){

    square s1,*ptr;
    ptr = &s1;

    ptr->getDimentition();
    ptr->getArea();

    circle c1,*ptrNew;
    ptrNew = &c1;

    ptrNew->getDimentition();
    ptrNew->getArea();

    return 0;
}