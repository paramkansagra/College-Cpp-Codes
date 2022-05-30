#include <iostream>
 
using namespace std;
 
class Employee{
    public:
        string name;
        int salary;

        void print(){
            cout<<name<<" "<<salary<<endl;
        }
};

class Manager:public Employee{
    public:
        string departmentType;
        
        void print(){
            cout<<name<<" "<<departmentType<<" "<<salary<<endl;
        }
};

class Executive:public Manager{
    public:
        void print(){
            cout<<name<<" "<<departmentType<<" "<<salary<<endl;
        }
};
int main(){

    Employee e1;
    Manager m1;
    Executive ee1;

    e1.name = "Aditya";
    e1.salary = 10000;

    m1.name = "Sarthak";
    m1.salary = 20000;
    m1.departmentType = "CS";

    ee1.name = "Param";
    ee1.salary = 30000;
    ee1.departmentType = "SEO";

    e1.print();
    m1.print();
    ee1.print();

    return 0;
}