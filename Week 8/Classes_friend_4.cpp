//Example of a program to illustrate friend class:
#include <iostream>

using namespace std;

// forward declaration
class ClassY;

class ClassX {
    int digit1;
    // friend class declaration
    friend class ClassY;
    public:
    // constructor to initialize num1 to 10
    ClassX() : digit1(10) {}
};

class ClassY {
    int digit2;

    public:
    // constructor to initialize num2 to 5
    ClassY() : digit2(5) {}
    // member function to multiply num1
    // from ClassX with num2 from ClassY
    int multiply() {
    ClassX m;
    return m.digit1 * digit2;
    }
};

int main() {
    ClassY n;
    cout << "Multiplication: " << n.multiply();
    return 0;
}