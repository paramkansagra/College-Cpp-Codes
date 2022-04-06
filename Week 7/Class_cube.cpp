#include <iostream>
using namespace std;

class Cube
{
    public:
        int side;
        Cube()//---> default Constructor
        {
        side = 10;
        }
};

int main()
{
    Cube c; // def.cons. called
    cout << c.side;
    return 0;
}