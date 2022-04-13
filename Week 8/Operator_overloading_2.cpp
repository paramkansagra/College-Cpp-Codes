#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex(int r, int i){
            real = r; imag = i;
        }
        
        Complex operator ++(int);//post-fix
        
        Complex &operator ++(); // Pre-fix

    void display(){
        cout<<real<<imag<<endl;
    }
};

Complex &Complex::operator ++(){
    real++; imag++;
    return *this;
}


Complex Complex::operator ++(int i){
    Complex c1(real, imag);
    real++; imag++;
    return c1;
}

int main()
{
    Complex c1(10, 15);
    c1++;
    c1.display();
    
    ++c1;
    c1.display();
    return 0;
}