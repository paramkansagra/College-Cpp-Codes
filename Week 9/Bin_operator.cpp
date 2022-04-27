#include <iostream>

using namespace std;

class Distance
{
    private :
        int feet;
        float inches;

    public :
        Distance()
        {
            feet=0;
            inches=0.0;
        }

        Distance(int ft,float in)
        {
            feet=ft;
            inches=in;
        }

        void get()
        {
            cout<<"\n Enter Feet :";
            cin>>feet;

            cout<<"\n Enter inches :";
            cin>>inches;
        }

        void show()
            {
                cout<<feet<<inches<<"\n";
            }
        Distance operator +(Distance);
        Distance operator -(Distance);
};

Distance Distance ::operator +(Distance d2)
{
    int f=feet+d2.feet;
    float i=inches+d2.inches;
    return Distance(f,i);
}

Distance Distance::operator-(Distance d2){
    int f = feet-d2.feet;
    float i = inches-d2.inches;
    return Distance(f,i);
}

int main()
{

    Distance d1,d3,d4;

    Distance d2(11,6.25);

    d1.get();
    d3=d1+d2;
    d4=d1+d2+d3;

    cout<<"\n D1= ";d1.show();
    cout<<"\n D2= ";d2.show();
    cout<<"\n D3= ";d3.show();
    cout<<"\n D4= ";d4.show();

    return 0;
}