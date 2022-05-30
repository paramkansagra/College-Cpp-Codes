#include <iostream>
 
using namespace std;
 
class y;

class x{
    public:
        int length,bredth;
        int area;

        x(){
            cout<<"input the length and bredth of rectangle ";
            cin>>length>>bredth;
        }

        friend void findArea(x&,y&);

        void print(){
            cout<<"Area of rectangle is "<<area<<endl;
        }
};

class y{
    public:
        int base,height;
        int area;

        y(){
            cout<<"input the base and height of the triangle ";
            cin>>base>>height;
        }

        friend void findArea(x&,y&);

        void print(){
            cout<<"Area of triangle is "<<area<<endl;
        }
};

void findArea(x& obj1,y& obj2){
    obj1.area = obj1.length*obj1.bredth;
    obj2.area = 0.5*obj2.base*obj2.height;
}

int main(){

    x obj1;
    y obj2;

    findArea(obj1,obj2);

    obj1.print();
    obj2.print();

    return 0;
}