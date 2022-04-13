#include<iostream>

using namespace std;

class book
{
    private :
    int bno;
    char bname[20];
    public:
    void getdata();
    friend void show(book);
};

void book::getdata()
{
    cin>>bno>>bname;
}

void show(book bk)
{
    cout<<bk.bno<<endl<<bk.bname;
}

int main()
{
    book b;
    b.getdata();
    show(b);
    return 0;
}