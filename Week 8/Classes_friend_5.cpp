#include<iostream>

using namespace std;

class second
{
    public:
        void show(first f)
        {
            cout<<f.no;
        }
};

class first
{
    private :
        int no;
    public:
        first(int n)
            {no=n;}
        friend class second;
};

int main()
{
    first f(10);
    second s;
    s.show(f);
    return 0;
}