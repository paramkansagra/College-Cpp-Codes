/*COPY CONSTRUCTOR*/
#include <iostream>
using namespace std;

class sample
{
    int x;
    public:
    sample(){
    }

    sample(int a)
    {
        x=a;
    }

    sample(sample &a)
    {
        x=a.x;
    }


    void show()
    {
        cout<<"\n values of this object is:"<<x;
    }

};

int main()
{
    sample a(100);
    sample b(a);

    sample c=a;
    sample d;

    d=a;
    cout<<"\n a:";
    a.show();
    cout<<"\n b:";
    b.show();

    cout<<"\n c:";
    c.show();

    cout<<"\n d:";
    d.show();

    return 0;
}