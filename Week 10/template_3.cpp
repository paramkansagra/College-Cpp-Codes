#include <bits/stdc++.h>

using namespace std;

struct A
{
    int x, y;
};

struct B
{
    int x;
    double y;
};

template <class T, class U>
void assign_a(T a, U b, A &s2)
{
    s2.x = a;
    s2.y = b;

    cout << "in assign_A() => " << a << " " << b << endl;
}

template <class T, class U>
void assign_b(T a, U b, B &s2)
{
    s2.x = a;
    s2.y = b;

    cout << "in assign_B() => " << a << " " << b << endl;
}

int main()
{

    A s1;
    B s2;

    int a = 10, b = 20, c = 30;
    float d = 3.30;

    assign_a(a, b, s1);
    assign_b(c, d, s2);

    cout << s1.x << " " << s1.y << endl;
    cout << s2.x << " " << s2.y << endl;

    return 0;
}