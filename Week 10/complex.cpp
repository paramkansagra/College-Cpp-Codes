#include <iostream>

using namespace std;

class complex{
    private:
        int imag,real;
    
    public:
        complex(){
            cin>>this->real>>this->imag;
        }

        int getImag(){
            return this->imag;
        }

        int getReal(){
            return this->real;
        }

        void print(){
            cout<<this->real<<" "<<this->imag<<endl;
        }

        void operator +(complex c2){
            this->imag += c2.getImag();
            this->real += c2.getReal();
        }

        void operator ++(int i){ // giving a dummy argument for the post fix thingy
            this->real++;
            this->imag++;
        }

        friend void operator-(complex&,complex&);

        void operator *(complex c2){
            this->imag = this->real*c2.getImag() + this->imag*c2.getReal();
            this->real = this->real*c2.getReal() - this->imag*c2.getImag();
        }
};

void operator-(complex& c1,complex& c2){
    c1.imag = c1.imag-c2.imag;
    c1.real = c1.real-c2.real;
}

int main(){

    complex c1;
    c1++;
    c1.print();

    return 0;
}