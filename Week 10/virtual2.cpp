#include <bits/stdc++.h>

using namespace std;

class shape{
    public:
        int side;
        virtual void getSide(){
            cout<<"shape class ";
            cin>>this->side;
        }

        virtual void area(){
            cout<<this->side*this->side<<endl;
        }
};

class rectangle:public shape{
    public:
        int length,bredth;
        void getSide(){
            cout<<"rectangle class ";
            cin>>this->length>>this->bredth;
        }
        void area(){
            cout<<this->length*this->bredth<<endl;
        }
};

class square:public rectangle{
    public:
        int side;
        void getSide(){
            cout<<"square class ";
            cin>>this->side;
        }
        void area(){
            cout<<this->side*this->side<<endl;
        }
};

int main(){

    shape s1,*ptr;
    square r1;

    ptr = &s1;
    ptr->getSide();
    ptr->area();

    ptr = &r1;
    ptr->getSide();
    ptr->area();

    return 0;
}