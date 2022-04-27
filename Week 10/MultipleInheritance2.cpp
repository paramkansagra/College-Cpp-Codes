#include <iostream>
 
using namespace std;
 
class A{

    private:
        int a;
    
    public:
        void setA(){
            cout<<"input a ";
            cin>>this->a;
        }

        int getA(){
            return this->a;
        }
};

class B{

    private:
        int b;
    
    public:
        void setB(){
            cout<<"input b ";
            cin>>this->b;
        }

        int getB(){
            return this->b;
        }
};

class C: public A,public B{
    
    private:
        int c;
    
    public:
        void setC(){
            this->c = this->getA() + this->getB();
        }

        int getC(){
            return this->c;
        }

};

int main(){

    C obj;

    obj.setA();
    obj.setB();

    obj.setC();
    cout<<"value of c is "<<obj.getC()<<endl;

    return 0;
}