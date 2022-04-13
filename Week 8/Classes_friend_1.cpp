#include <iostream>

using namespace std;

class Box
{
    private:
    int length;
    public:
    Box(): length(0) { }
    friend int printLength(Box); //friend function -1st step
};

int printLength(Box b) // step-2
{
    b.length += 10; // accessing private members via object.
    return b.length;
}

int main()
{
    Box b;
    cout<<"Length of box: "<< printLength(b)<<endl; //step-3
    return 0;
}