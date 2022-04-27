#include <iostream>
#include <string>

using namespace std;

class Name
{
    private:
        string fname, lname;
    public:
        Name(string f= " ", string l = "")
        {
        fname = f;
        lname = l;
        }

        friend ostream & operator << (ostream &o, const Name &n);
        friend istream & operator >> (istream &i, Name &n);
};

ostream & operator << (ostream &o, const Name &n)
{
    o << "First Name is: " << n.fname << endl;
    o << "Last Name is: " << n.lname << endl;
    return o;
}

istream & operator >> (istream &i, Name &n)
{
    i >> n.fname;
    i >> n.lname;
    return i;
}

int main()
{
    Name name;
    cout << "Enter name:" << endl;
    cin >> name;
    cout << name;
    return 0;
}